/** This file is generated from page.tsx */
#include <ui.h>
#include "page.module.css.h"

// UTF-8 encoded string from: Hello%2C%20
static const unsigned char widget_text_0[] = {0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x2c, 0x20, 0};
// UTF-8 encoded string from: !
static const unsigned char widget_text_1[] = {0x21, 0};
// UTF-8 encoded string from: Change
static const unsigned char widget_text_2[] = {0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0};

typedef struct {
        ui_widget_t *ref_0;
        ui_widget_t *ref_1;
} root_page_refs_t;

typedef struct root_page_react_state {
        char* name;
} root_page_react_state_t;

typedef struct root_page_react {
        root_page_react_state_t state;
        root_page_refs_t refs;
} root_page_react_t;

static ui_widget_prototype_t *root_page_proto;

static void root_page_init_prototype(void)
{
        root_page_proto = ui_create_widget_prototype("root_page", NULL);
}

static void root_page_load_template(ui_widget_t *parent, root_page_refs_t *refs)
{
        ui_widget_t *w[3];

        ui_widget_add_class(parent, "_app_1kc2t_7");
        w[0] = ui_create_widget(NULL);
        ui_widget_set_text(w[0], (const char*)widget_text_0);
        refs->ref_0 = ui_create_widget(NULL);
        w[1] = ui_create_widget(NULL);
        ui_widget_set_text(w[1], (const char*)widget_text_1);
        w[2] = ui_create_widget("textinput");
        ui_widget_set_attr(w[2], "placeholder", "Please input...");
        refs->ref_1 = ui_create_widget("button");
        ui_widget_set_text(refs->ref_1, (const char*)widget_text_2);
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, refs->ref_0);
        ui_widget_append(parent, w[1]);
        ui_widget_append(parent, w[2]);
        ui_widget_append(parent, refs->ref_1);
        ui_widget_append(parent, parent);
}

static void root_page_react_init_state(ui_widget_t *w)
{
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        _that->state.name = strdup2("LCUI");
}

static void root_page_react_destroy_state(ui_widget_t *w)
{
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        free(_that->state.name);
}

static void root_page_react_update(ui_widget_t *w)
{
        char* str_0 = NULL;
        size_t str_0_len = 8;
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        str_0_len += strlen(_that->state.name);
        str_0 = malloc(sizeof(char) * str_0_len);
        strcpy(str_0, _that->state.name);
        ui_widget_set_text(_that->refs.ref_0, str_0);
        free(str_0);
}

static void root_page_handle_button_click_0(ui_widget_t *w, ui_event_t *e, void *arg)
{
        char* str_0 = strdup2("Test");
        root_page_react_t *_that = ui_widget_get_data(e->data, root_page_proto);
        free(_that->state.name);
        _that->state.name = str_0;
        root_page_react_update(w);
        free(str_0);
}

static void root_page_react_init_events(ui_widget_t *w)
{
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        ui_widget_on(_that->refs.ref_1, "click", root_page_handle_button_click_0, w);
}

static void root_page_react_init(ui_widget_t *w)
{
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        root_page_load_template(w, &_that->refs);
        root_page_react_init_state(w);
        root_page_react_init_events(w);
        root_page_react_update(w);
}

static void root_page_react_destroy(ui_widget_t *w)
{
        root_page_react_destroy_state(w);
}

void ui_load_root_page_resources(void)
{
        ui_load_css_string(css_str_page_module, "page.module.css");
}
