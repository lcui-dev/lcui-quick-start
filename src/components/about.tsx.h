/** This file is generated from about.tsx */

#include <ui.h>
#include "about.module.scss.h"

typedef struct {
        ui_widget_t *name;
        ui_widget_t *version;
        ui_widget_t *lcui_version;
        ui_widget_t *description;
        ui_widget_t *homepage;
        ui_widget_t *bugs_url;
} about_refs_t;


static ui_widget_prototype_t *about_proto;

static void about_init_prototype(void)
{
        about_proto = ui_create_widget_prototype("About", NULL);
}

// UTF-8 encoded string from: Visit%20homepage
static const char widget_text_0[] = {86, 105, 115, 105, 116, 32, 104, 111, 109, 101, 112, 97, 103, 101, 0};
// UTF-8 encoded string from: Report%20an%20issue
static const char widget_text_1[] = {82, 101, 112, 111, 114, 116, 32, 97, 110, 32, 105, 115, 115, 117, 101, 0};

static void about_load_template(ui_widget_t *parent, about_refs_t *refs)
{
        ui_widget_t *w[4];

        ui_widget_add_class(parent, "_about_1m0hk_1");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "_item_1m0hk_8");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "_icon_1m0hk_31");
        refs->name = ui_create_widget("text");
        ui_widget_add_class(refs->name, "_name_1m0hk_41");
        w[2] = ui_create_widget(NULL);
        ui_widget_add_class(w[2], "_item_1m0hk_8");
        w[3] = ui_create_widget(NULL);
        ui_widget_add_class(w[3], "_meta_1m0hk_23");
        refs->version = ui_create_widget("text");
        refs->lcui_version = ui_create_widget("text");
        refs->description = ui_create_widget("text");
        refs->homepage = ui_create_widget("a");
        ui_widget_add_class(refs->homepage, "_item_1m0hk_8");
        ui_widget_set_text(refs->homepage, widget_text_0);
        refs->bugs_url = ui_create_widget("a");
        ui_widget_add_class(refs->bugs_url, "_item_1m0hk_8");
        ui_widget_set_text(refs->bugs_url, widget_text_1);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], refs->name);
        ui_widget_append(w[3], refs->version);
        ui_widget_append(w[3], refs->lcui_version);
        ui_widget_append(w[2], w[3]);
        ui_widget_append(w[2], refs->description);
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, w[2]);
        ui_widget_append(parent, refs->homepage);
        ui_widget_append(parent, refs->bugs_url);
}

static void about_load_resources(void)
{
        ui_load_css_string(css_str_about_module, "about.module.scss");
}
