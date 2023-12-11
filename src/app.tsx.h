/** This file is generated from app.tsx */

#include <ui.h>
#include "../vendor.node_modules/@lcui/react-icons/dist/style.css.h"
#include "app.scss.h"


static ui_widget_prototype_t *app_proto;

static void app_init_prototype(void)
{
        app_proto = ui_create_widget_prototype("App", "Home");
}


static void app_load_template(ui_widget_t *parent)
{
}

static void app_load_resources(void)
{
        ui_load_css_string(css_str_style, "style.css");
        ui_load_css_string(css_str_app, "app.scss");
}
