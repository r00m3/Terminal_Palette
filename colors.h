#ifndef COLORS_H
#define COLORS_H

#include <stdio.h>

static void clear_terminal()
{
	printf("\x1b[H");
	printf("\x1b[2J");
	printf("\x1b[3J");
}

#define MARGIN "        "

#define ESC "\x1B["
#define RES ESC "0m"

#define BOLD       ESC "1m"
#define UNDERLINE  ESC "4m"
#define BLINK      ESC "5m"
#define INVERSE    ESC "7m"

#define BLACK_FG ESC "30m"
#define BLACK_FG_BOLD ESC "1;30m"
#define BLACK_FG_BRIGHT ESC "90m"
#define BLACK_FG_BRIGHT_BOLD ESC "1;90m"
#define BLACK_BG ESC "40m"
#define BLACK_BG_BRIGHT ESC "100m"

#define RED_FG ESC "31m"
#define RED_FG_BOLD ESC "1;31m"
#define RED_FG_BRIGHT ESC "91m"
#define RED_FG_BRIGHT_BOLD ESC "1;91m"
#define RED_BG ESC "41m"
#define RED_BG_BRIGHT ESC "101m"

#define GREEN_FG ESC "32m"
#define GREEN_FG_BOLD ESC "1;32m"
#define GREEN_FG_BRIGHT ESC "92m"
#define GREEN_FG_BRIGHT_BOLD ESC "1;92m"
#define GREEN_BG ESC "42m"
#define GREEN_BG_BRIGHT ESC "102m"

#define YELLOW_FG ESC "33m"
#define YELLOW_FG_BOLD ESC "1;33m"
#define YELLOW_FG_BRIGHT ESC "93m"
#define YELLOW_FG_BRIGHT_BOLD ESC "1;93m"
#define YELLOW_BG ESC "43m"
#define YELLOW_BG_BRIGHT ESC "103m"

#define BLUE_FG ESC "34m"
#define BLUE_FG_BOLD ESC "1;34m"
#define BLUE_FG_BRIGHT ESC "94m"
#define BLUE_FG_BRIGHT_BOLD ESC "1;94m"
#define BLUE_BG ESC "44m"
#define BLUE_BG_BRIGHT ESC "104m"

#define MAGENTA_FG ESC "35m"
#define MAGENTA_FG_BOLD ESC "1;35m"
#define MAGENTA_FG_BRIGHT ESC "95m"
#define MAGENTA_FG_BRIGHT_BOLD ESC "1;95m"
#define MAGENTA_BG ESC "45m"
#define MAGENTA_BG_BRIGHT ESC "105m"

#define CYAN_FG ESC "36m"
#define CYAN_FG_BOLD ESC "1;36m"
#define CYAN_FG_BRIGHT ESC "96m"
#define CYAN_FG_BRIGHT_BOLD ESC "1;96m"
#define CYAN_BG ESC "46m"
#define CYAN_BG_BRIGHT ESC "106m"

#define WHITE_FG ESC "37m"
#define WHITE_FG_BOLD ESC "1;37m"
#define WHITE_FG_BRIGHT ESC "97m"
#define WHITE_FG_BRIGHT_BOLD ESC "1;97m"
#define WHITE_BG ESC "47m"
#define WHITE_BG_BRIGHT ESC "107m"

#endif
