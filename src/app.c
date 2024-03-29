#include "config.h"
#include <LCUI.h>
#include <LCUI/main.h>
#include "app.tsx.h"
#include "./components/about.h"
#include "./pages/home.h"

int main(int argc, char **argv)
{
	ui_widget_t *app_view;

	lcui_init();
	ui_register_about();
	ui_register_home();
	app_init_prototype();
	app_load_resources();
	app_view = ui_create_widget("App");
	app_load_template(app_view);
	ui_root_append(app_view);
	ui_widget_set_title(ui_root(), APP_NAME);
	return lcui_main();
}
