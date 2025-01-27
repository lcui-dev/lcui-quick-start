/** This file is generated from page.tsx */
#include <ui.h>
#include "styles.module.scss.h"

// UTF-8 encoded string from: lcui-quick-start
static const unsigned char widget_text_0[] = {0x6c, 0x63, 0x75, 0x69, 0x2d, 0x71, 0x75, 0x69, 0x63, 0x6b, 0x2d, 0x73, 0x74, 0x61, 0x72, 0x74, 0};
// UTF-8 encoded string from: 0.2.0
static const unsigned char widget_text_1[] = {0x30, 0x2e, 0x32, 0x2e, 0x30, 0};
// UTF-8 encoded string from: A%20minimal%20LCUI%20application
static const unsigned char widget_text_2[] = {0x41, 0x20, 0x6d, 0x69, 0x6e, 0x69, 0x6d, 0x61, 0x6c, 0x20, 0x4c, 0x43, 0x55, 0x49, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0};
// UTF-8 encoded string from: Visit%20homepage
static const unsigned char widget_text_3[] = {0x56, 0x69, 0x73, 0x69, 0x74, 0x20, 0x68, 0x6f, 0x6d, 0x65, 0x70, 0x61, 0x67, 0x65, 0};
// UTF-8 encoded string from: %EE%83%AA
static const unsigned char widget_text_4[] = {0xee, 0x83, 0xaa, 0};
// UTF-8 encoded string from: Report%20an%20issue
static const unsigned char widget_text_5[] = {0x52, 0x65, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x61, 0x6e, 0x20, 0x69, 0x73, 0x73, 0x75, 0x65, 0};
// UTF-8 encoded string from: %EE%83%AA
static const unsigned char widget_text_6[] = {0xee, 0x83, 0xaa, 0};

typedef struct {
        ui_widget_t *lcui_version;
        ui_widget_t *ref_1;
        ui_widget_t *ref_2;
} about_page_refs_t;

typedef struct about_page_react_state {
        char empty;
} about_page_react_state_t;

typedef struct about_page_react {
        about_page_react_state_t state;
        about_page_refs_t refs;
} about_page_react_t;

static ui_widget_prototype_t *about_page_proto;

static void about_page_init_prototype(void)
{
        about_page_proto = ui_create_widget_prototype("about_page", NULL);
}

static void about_page_load_template(ui_widget_t *parent, about_page_refs_t *refs)
{
        ui_widget_t *w[12];

        ui_widget_add_class(parent, "container");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "_about_1hw5p_1");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "_item_1hw5p_8");
        w[2] = ui_create_widget(NULL);
        ui_widget_add_class(w[2], "_icon_1hw5p_36");
        w[3] = ui_create_widget("text");
        ui_widget_add_class(w[3], "_name_1hw5p_46");
        ui_widget_set_text(w[3], (const char*)widget_text_0);
        ui_widget_append(w[1], w[2]);
        ui_widget_append(w[1], w[3]);
        w[4] = ui_create_widget(NULL);
        ui_widget_add_class(w[4], "_item_1hw5p_8");
        w[5] = ui_create_widget(NULL);
        ui_widget_add_class(w[5], "_meta_1hw5p_28");
        w[6] = ui_create_widget("text");
        ui_widget_set_text(w[6], (const char*)widget_text_1);
        refs->lcui_version = ui_create_widget("text");
        ui_widget_append(w[5], w[6]);
        ui_widget_append(w[5], refs->lcui_version);
        w[7] = ui_create_widget("text");
        ui_widget_set_text(w[7], (const char*)widget_text_2);
        ui_widget_append(w[4], w[5]);
        ui_widget_append(w[4], w[7]);
        w[8] = ui_create_widget("a");
        ui_widget_add_class(w[8], "_item_1hw5p_8");
        ui_widget_set_attr(w[8], "href", "https://github.com/lcui-dev/lcui-quick-start");
        w[9] = ui_create_widget("text");
        ui_widget_set_text(w[9], (const char*)widget_text_3);
        refs->ref_1 = ui_create_widget("text");
        ui_widget_add_class(refs->ref_1, "fui-icon-regular");
        ui_widget_set_text(refs->ref_1, (const char*)widget_text_4);
        ui_widget_append(w[8], w[9]);
        ui_widget_append(w[8], refs->ref_1);
        w[10] = ui_create_widget("a");
        ui_widget_add_class(w[10], "_item_1hw5p_8");
        ui_widget_set_attr(w[10], "href", "https://github.com/lcui-dev/lcui-quick-start/issues");
        w[11] = ui_create_widget("text");
        ui_widget_set_text(w[11], (const char*)widget_text_5);
        refs->ref_2 = ui_create_widget("text");
        ui_widget_add_class(refs->ref_2, "fui-icon-regular");
        ui_widget_set_text(refs->ref_2, (const char*)widget_text_6);
        ui_widget_append(w[10], w[11]);
        ui_widget_append(w[10], refs->ref_2);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], w[4]);
        ui_widget_append(w[0], w[8]);
        ui_widget_append(w[0], w[10]);
        ui_widget_append(parent, w[0]);
}

static void about_page_react_update(ui_widget_t *w)
{
        about_page_react_t *_that = ui_widget_get_data(w, about_page_proto);
}

static void about_page_react_init(ui_widget_t *w)
{
        about_page_react_t *_that = ui_widget_get_data(w, about_page_proto);
        about_page_load_template(w, &_that->refs);
}

static void about_page_react_destroy(ui_widget_t *w)
{
}

void ui_load_about_page_resources(void)
{
        ui_load_css_string(css_str_styles_module, "styles.module.scss");
}
