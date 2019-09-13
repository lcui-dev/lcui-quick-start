#include <stdio.h>
#include "ui.h"

int main(void)
{
	printf("hello, world!\n");

	UI_Init();
	return UI_Run();
}
