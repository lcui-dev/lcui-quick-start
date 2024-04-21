#include <LCUI.h>
#include <LCUI/main.h>
#include <ui_router.h>
#include "about\page.h"
#include "layout.h"
#include "page.h"

router_t *create_app_router(void)
{
        router_config_t *config;
        router_route_t *root_layout;
        router_t *router = router_create("AppRouter");

        config = router_config_create();
        router_config_set_path(config, "/");
        router_config_set_component(config, NULL, "root_layout");
        root_layout = router_add_route_record(router, config, NULL);
        router_config_destroy(config);

        config = router_config_create();
        router_config_set_path(config, "");
        router_config_set_component(config, NULL, "root_page");
        router_add_route_record(router, config, root_layout);
        router_config_destroy(config);

        config = router_config_create();
        router_config_set_path(config, "about");
        router_config_set_component(config, NULL, "about_page");
        router_add_route_record(router, config, root_layout);
        router_config_destroy(config);

        return router;
}


static void lcui_app_init(void)
{
        lcui_init();
        ui_register_router_link();
        ui_register_router_view();
        ui_load_about_page_resources();
        ui_load_root_layout_resources();
        ui_load_root_page_resources();
        ui_register_about_page();
        ui_register_root_layout();
        ui_register_root_page();
}

static int lcui_app_run(void)
{
        return lcui_run();
}

