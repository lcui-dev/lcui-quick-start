#include "ui.h"

int main(void)
{
	if (UI_Init() != 0) {
		return -1;
	}
	return UI_Run();
}
