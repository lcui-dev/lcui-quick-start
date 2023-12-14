#include <yutil.h>
#include <timer.h>
#include <ui_widgets.h>
#include "store.h"
#include "home.h"
#include "home.tsx.h"

typedef struct home_t {
        home_refs_t refs;
        struct store store;
        int feedback_timer;
} home_t;

static void on_feedback_timeout(void *arg)
{
        home_t *self;

        self = ui_widget_get_data(arg, home_proto);
        ui_widget_hide(self->refs.feedback);
        self->feedback_timer = 0;
}

static void on_btn_save_click(ui_widget_t *w, ui_event_t *e, void *unused)
{
        size_t len;
        wchar_t wcs[256];

        home_t *self;

        self = ui_widget_get_data(e->data, home_proto);
        len = ui_textinput_get_text_w(self->refs.input_message, 0, 255, wcs);
        wcs[len] = 0;

        len = encode_utf8(self->store.message, wcs, 255);
        self->store.message[len] = 0;
        store_save(&self->store);
        if (self->feedback_timer) {
                lcui_destroy_timer(self->feedback_timer);
        }
        ui_widget_show(self->refs.feedback);
        self->feedback_timer =
            lcui_set_timeout(2000, on_feedback_timeout, e->data);
}

static void home_init(ui_widget_t *w)
{
        home_t *self;

        self = ui_widget_add_data(w, home_proto, sizeof(home_t));
        home_load_template(w, &self->refs);
        if (store_load(&self->store) != 0) {
                store_init(&self->store);
                store_save(&self->store);
        }
        ui_widget_on(self->refs.btn_save_message, "click", on_btn_save_click,
                     w);
        ui_textinput_set_text(self->refs.input_message, self->store.message);
        ui_widget_hide(self->refs.feedback);
}

void ui_register_home(void)
{
        home_init_prototype();
        home_proto->init = home_init;
}
