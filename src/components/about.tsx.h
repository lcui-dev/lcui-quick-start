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
static const char widget_text_0[] = {108, 99, 117, 105, 45, 113, 117, 105, 99, 107, 45, 115, 116, 97, 114, 116, 0};
// UTF-8 encoded string from: 0.2.0
static const char widget_text_1[] = {48, 46, 50, 46, 48, 0};
// UTF-8 encoded string from: A%20minimal%20LCUI%20application
static const char widget_text_2[] = {65, 32, 109, 105, 110, 105, 109, 97, 108, 32, 76, 67, 85, 73, 32, 97, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 0};
// UTF-8 encoded string from: Visit%20homepage
static const char widget_text_3[] = {86, 105, 115, 105, 116, 32, 104, 111, 109, 101, 112, 97, 103, 101, 0};
// UTF-8 encoded string from: Report%20an%20issue
static const char widget_text_4[] = {82, 101, 112, 111, 114, 116, 32, 97, 110, 32, 105, 115, 115, 117, 101, 0};

static void about_load_template(ui_widget_t *parent, about_refs_t *refs)
{
        ui_widget_t *w[9];

        ui_widget_add_class(parent, "_about_1m0hk_1");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "_item_1m0hk_8");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "_icon_1m0hk_31");
        w[2] = ui_create_widget("text");
        ui_widget_add_class(w[2], "_name_1m0hk_41");
        ui_widget_set_text(w[2], widget_text_0);
        w[3] = ui_create_widget(NULL);
        ui_widget_add_class(w[3], "_item_1m0hk_8");
        w[4] = ui_create_widget(NULL);
        ui_widget_add_class(w[4], "_meta_1m0hk_23");
        w[5] = ui_create_widget("text");
        ui_widget_set_text(w[5], widget_text_1);
        refs->lcui_version = ui_create_widget("text");
        w[6] = ui_create_widget("text");
        ui_widget_set_text(w[6], widget_text_2);
        w[7] = ui_create_widget("a");
        ui_widget_add_class(w[7], "_item_1m0hk_8");
        ui_widget_set_attr(w[7], "href", "https://github.com/lcui-dev/lcui-quick-start");
        ui_widget_set_text(w[7], widget_text_3);
        w[8] = ui_create_widget("a");
        ui_widget_add_class(w[8], "_item_1m0hk_8");
        ui_widget_set_attr(w[8], "href", "https://github.com/lcui-dev/lcui-quick-start/issues");
        ui_widget_set_text(w[8], widget_text_4);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], w[2]);
        ui_widget_append(w[4], w[5]);
        ui_widget_append(w[4], refs->lcui_version);
        ui_widget_append(w[3], w[4]);
        ui_widget_append(w[3], w[6]);
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, w[3]);
        ui_widget_append(parent, w[7]);
        ui_widget_append(parent, w[8]);
}

static void about_load_resources(void)
{
        ui_load_css_string(css_str_about_module, "about.module.scss");
}
