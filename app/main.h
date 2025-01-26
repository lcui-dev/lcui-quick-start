#include <locale.h>
#include <LCUI.h>
#include <LCUI/main.h>
#include <router.h>
#include "about\page.h"
#include "layout.h"
#include "page.h"

static void app_router_init(void)
{
        router_config_t *config;
        router_t *router = router_create("AppRouter");

        config = router_config_create();
        router_config_set_path(config, "/about");
        router_config_set_component(config, NULL, "about_page");
        router_add_route_record(router, config, NULL);
        router_config_destroy(config);

        config = router_config_create();
        router_config_set_path(config, "/");
        router_config_set_component(config, NULL, "root_page");
        router_add_route_record(router, config, NULL);
        router_config_destroy(config);
}

static void app_init(void)
{
        lcui_init();
        app_router_init();
        ui_load_about_page_resources();
        ui_load_root_layout_resources();
        ui_load_root_page_resources();
        ui_register_about_page();
        ui_register_root_layout();
        ui_register_root_page();
        ui_widget_set_attr(ui_root(), "router", "AppRouter");
        ui_widget_append(ui_root(), ui_create_root_layout());
}

static int app_run(void)
{
        return lcui_run();
}
