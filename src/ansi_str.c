#include "ansi_str.h"

int printf(const char*, ...);

void test_ansi_attributes()
{
	printf("\x1b[0m" "Reset / Normal" "\x1b[0m\n");
	printf("\x1b[1m" "Bold / Bright" "\x1b[0m\n");
	printf("\x1b[2m" "Dim" "\x1b[0m\n");
	printf("\x1b[3m" "Italic" "\x1b[0m\n");
	printf("\x1b[4m" "Underline" "\x1b[0m\n");
	printf("\x1b[5m" "Blink" "\x1b[0m\n");
	printf("\x1b[7m" "Inverse (Swap colors)" "\x1b[0m\n");
	printf("\x1b[8m" "Hidden" "\x1b[0m <- hidden\n");
	printf("\x1b[9m" "Strikethrough" "\x1b[0m\n");
}