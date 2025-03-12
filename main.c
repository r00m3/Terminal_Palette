#include "colors.h"

void print_color(char *color_fg, char *color_name)
{
	printf("\n%s%s%-15s%s%-10s%s",
	MARGIN, color_fg, color_name,
	INVERSE, color_name, RES);
}

int main()
{
	clear_terminal();
	// Regular colors.
	print_color(BLACK_FG, "  Black");
	print_color(RED_FG, "  Red");
	print_color(GREEN_FG, "  Green");
	print_color(YELLOW_FG, "  Yellow");
	print_color(BLUE_FG, "  Blue");
	print_color(MAGENTA_FG, "  Magenta");
	print_color(CYAN_FG, "  Cyan");
	print_color(WHITE_FG, "  White");
	// Bright colors.
	printf("\n\n");
	print_color(BLACK_FG_BRIGHT, "  Black");
	print_color(RED_FG_BRIGHT, "  Red");
	print_color(GREEN_FG_BRIGHT, "  Green");
	print_color(YELLOW_FG_BRIGHT, "  Yellow");
	print_color(BLUE_FG_BRIGHT, "  Blue");
	print_color(MAGENTA_FG_BRIGHT, "  Magenta");
	print_color(CYAN_FG_BRIGHT, "  Cyan");
	print_color(WHITE_FG_BRIGHT, "  White");
	printf("\n\n\n");
}
