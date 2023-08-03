#include <yutil.h>
#include <timer.h>
#include <ui_widgets.h>
#include "store.h"
#include "home.h"
#include "home.xml.h"

typedef struct HomeViewRec_ {
	home_refs_t refs;
        struct store store;
        int feedback_timer;
} HomeViewRec, *HomeView;

ui_widget_prototype_t *home_view_proto;

static void OnFeedbackTimeout(void *arg)
{
        HomeView self;

        self = ui_widget_get_data(arg, home_view_proto);
        ui_widget_hide(self->refs.feedback);
        self->feedback_timer = 0;
}

static void OnBtnSaveClick(ui_widget_t *w, ui_event_t *e, void *unused)
{
        size_t len;
        wchar_t wcs[256];

        HomeView self;

        self = ui_widget_get_data(e->data, home_view_proto);
        len = ui_textedit_get_text_w(self->refs.input_message, 0, 255, wcs);
        wcs[len] = 0;

        len = encode_utf8(self->store.message, wcs, 255);
        self->store.message[len] = 0;
        store_save(&self->store);
        if (self->feedback_timer) {
                lcui_destroy_timer(self->feedback_timer);
        }
        ui_widget_show(self->refs.feedback);
        self->feedback_timer =
            lcui_set_timeout(2000, OnFeedbackTimeout, e->data);
}

static void HomeView_OnInit(ui_widget_t *w)
{
        HomeView self;

        self = ui_widget_add_data(w, home_view_proto, sizeof(HomeViewRec));
        home_load_template(w, &self->refs);
        if (store_load(&self->store) != 0) {
                store_init(&self->store);
                store_save(&self->store);
        }
        ui_widget_on(self->refs.btn_save_message, "click", OnBtnSaveClick, w);
        ui_textedit_set_text(self->refs.input_message, self->store.message);
        ui_widget_hide(self->refs.feedback);
        ui_widget_add_class(w, "view v-home");
}

void UI_InitHomeView(void)
{
        home_view_proto = ui_create_widget_prototype("home", NULL);
        home_view_proto->init = HomeView_OnInit;
}
