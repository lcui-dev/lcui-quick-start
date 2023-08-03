#include "config.h"
#include <LCUI.h>
#include <LCUI/main.h>
#include "app.xml.h"
#include "components.h"
#include "views.h"

int main(int argc, char **argv)
{
	lcui_init();
	UI_InitComponents();
	UI_InitViews();
	ui_widget_set_title(ui_root(), APP_NAME);
	app_load_resources();
	app_load_template(ui_root());
	return lcui_main();
}
