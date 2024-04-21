#include "main.h"

int main(int argc, char *argv[])
{
        lcui_app_init();

        // Create a router and route to the root path "/", This means that
        // your app will present the user interface in app/page.ts
        router_t *router = create_app_router();
        router_location_t *location = router_location_create(NULL, "/");
        router_push(router, location);

        // Write code here to initialize your application,
        // such as loading configuration files, initializing functional modules
        // ...

        return lcui_app_run();
}
