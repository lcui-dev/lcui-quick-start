#include "main.h"

int main(int argc, char *argv[])
{
        app_init();

        // Get app router and route to the root path "/", This means that
        // your app will present the user interface in app/page.ts
        router_t *router = router_get_by_name("AppRouter");
        router_location_t *location = router_location_create(NULL, "/");
        router_push(router, location);
        router_location_destroy(location);

        // Write code here to initialize your application,
        // such as loading configuration files, initializing functional modules
        // ...

        return app_run();
}
