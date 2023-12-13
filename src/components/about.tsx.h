/** This file is generated from about.tsx */

#include <ui.h>
#include "about.module.scss.h"

typedef struct {
        ui_widget_t *lcui_version;
} about_refs_t;


static ui_widget_prototype_t *about_proto;

static void about_init_prototype(void)
{
        about_proto = ui_create_widget_prototype("About", NULL);
}

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

static void about_load_template(ui_widget_t *parent, about_refs_t *refs)
{
        ui_widget_t *w[13];

        ui_widget_add_class(parent, "_about_w3t5e_1");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "_item_w3t5e_8");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "_icon_w3t5e_36");
        w[2] = ui_create_widget("text");
        ui_widget_add_class(w[2], "_name_w3t5e_46");
        ui_widget_set_text(w[2], (const char*)widget_text_0);
        w[3] = ui_create_widget(NULL);
        ui_widget_add_class(w[3], "_item_w3t5e_8");
        w[4] = ui_create_widget(NULL);
        ui_widget_add_class(w[4], "_meta_w3t5e_28");
        w[5] = ui_create_widget("text");
        ui_widget_set_text(w[5], (const char*)widget_text_1);
        refs->lcui_version = ui_create_widget("text");
        w[6] = ui_create_widget("text");
        ui_widget_set_text(w[6], (const char*)widget_text_2);
        w[7] = ui_create_widget("a");
        ui_widget_add_class(w[7], "_item_w3t5e_8");
        ui_widget_set_attr(w[7], "href", "https://github.com/lcui-dev/lcui-quick-start");
        w[8] = ui_create_widget("text");
        ui_widget_set_text(w[8], (const char*)widget_text_3);
        w[9] = ui_create_widget("text");
        ui_widget_add_class(w[9], "fui-icon-regular");
        ui_widget_set_style_unit_value(w[9], css_prop_font_size, 12, CSS_UNIT_PX);
        ui_widget_set_text(w[9], (const char*)widget_text_4);
        w[10] = ui_create_widget("a");
        ui_widget_add_class(w[10], "_item_w3t5e_8");
        ui_widget_set_attr(w[10], "href", "https://github.com/lcui-dev/lcui-quick-start/issues");
        w[11] = ui_create_widget("text");
        ui_widget_set_text(w[11], (const char*)widget_text_5);
        w[12] = ui_create_widget("text");
        ui_widget_add_class(w[12], "fui-icon-regular");
        ui_widget_set_style_unit_value(w[12], css_prop_font_size, 12, CSS_UNIT_PX);
        ui_widget_set_text(w[12], (const char*)widget_text_6);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], w[2]);
        ui_widget_append(w[4], w[5]);
        ui_widget_append(w[4], refs->lcui_version);
        ui_widget_append(w[7], w[8]);
        ui_widget_append(w[7], w[9]);
        ui_widget_append(w[10], w[11]);
        ui_widget_append(w[10], w[12]);
        ui_widget_append(w[3], w[4]);
        ui_widget_append(w[3], w[6]);
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, w[3]);
        ui_widget_append(parent, w[7]);
        ui_widget_append(parent, w[10]);
}

static void about_load_resources(void)
{
        ui_load_css_string(css_str_about_module, "about.module.scss");
}
