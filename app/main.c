#include "main.h"

void on_timer(void*arg)
{
        ui_print_tree(NULL);
}

int main(int argc, char *argv[])
{
        lcui_app_init();

        // Get app router and route to the root path "/", This means that
        // your app will present the user interface in app/page.ts
        router_t *router = router_get_by_name("AppRouter");
        router_location_t *location = router_location_create(NULL, "/");
        router_push(router, location);
        router_location_destroy(location);

        // Write code here to initialize your application,
        // such as loading configuration files, initializing functional modules
        // ...

        // lcui_set_interval(2000, on_timer, NULL);
        return lcui_app_run();
}
