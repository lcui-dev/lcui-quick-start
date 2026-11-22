/** This file is generated from page.tsx */
#include <ui.h>
#include <stdlib.h>
#include <LCUI/widgets.h>
#include <stdio.h>
#include <string.h>

// UTF-8 encoded string from: Change
static const unsigned char widget_text_0[] = {0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0};

typedef struct {
        ui_widget_t *inputRef;
        ui_widget_t *text_ref1;
        ui_widget_t *ref_2;
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
        ui_widget_t *w[2];

        ui_widget_add_class(parent, "container");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "flex flex-col items-center pt-6");
        w[1] = ui_create_widget("text");
        ui_widget_add_class(w[1], "fui-icon fui-icon-emoji-sparkle text-yellow-500");
        ui_widget_set_style_string(w[1], "font-size", "40px");
        refs->text_ref1 = ui_create_widget("text");
        ui_widget_add_class(refs->text_ref1, "my-4 text-2xl text-center");
        refs->inputRef = ui_create_widget("textinput");
        ui_widget_set_attr(refs->inputRef, "placeholder", "Please input...");
        ui_widget_add_class(refs->inputRef, "mt-2");
        refs->ref_2 = ui_create_widget("button");
        ui_widget_add_class(refs->ref_2, "mt-2");
        ui_widget_set_text(refs->ref_2, (const char*)widget_text_0);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], refs->text_ref1);
        ui_widget_append(w[0], refs->inputRef);
        ui_widget_append(w[0], refs->ref_2);
        ui_widget_append(parent, w[0]);
}

static void root_page_react_init_state(ui_widget_t *w)
{
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        _that->state.name = y_strdup("LCUI");
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
        char* str_2 = y_strdup("Hello, ");
        char* str_3 = y_strdup("!");
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        str_0_len += strlen(str_2);
        str_0_len += strlen(_that->state.name);
        str_0_len += strlen(str_3);
        str_0 = malloc(sizeof(char) * str_0_len);
        strcpy(str_0, str_2);
        strcat(str_0, _that->state.name);
        strcat(str_0, str_3);
        ui_widget_set_text(_that->refs.text_ref1, str_0);
        free(str_0);
        free(str_2);
        free(str_3);
}

static void root_page_handle_button_click_0(ui_widget_t *w, ui_event_t *e, void *arg)
{
        char* str_0 = NULL;
        size_t str_0_len = 0;
        root_page_react_t *_that = ui_widget_get_data(e->data, root_page_proto);
        size_t str_0_wcs_len = ui_textinput_get_text_length(_that->refs.inputRef);
        wchar_t *str_0_wcs = malloc(sizeof(wchar_t) * (str_0_wcs_len + 4));
        ui_textinput_get_text_w(_that->refs.inputRef, 0, str_0_wcs_len + 1, str_0_wcs);
        str_0_len = wcstombs(NULL, str_0_wcs, 0) + 1;
        str_0 = malloc(sizeof(char) * str_0_len);
        wcstombs(str_0, str_0_wcs, str_0_len);
        free(_that->state.name);
        _that->state.name = str_0;
        root_page_react_update(e->data);
}

static void root_page_react_init_events(ui_widget_t *w)
{
        root_page_react_t *_that = ui_widget_get_data(w, root_page_proto);
        ui_widget_on(_that->refs.ref_2, "click", root_page_handle_button_click_0, w);
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
}
