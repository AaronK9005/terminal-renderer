#pragma once

#define ANSI_RESET "\x1b[0m"

#define ANSI_BOLD "\x1b[1m"
#define ANSI_DIM "\x1b[2m"
#define ANSI_ITALIC "\x1b[3m"
#define ANSI_UNDERLINE "\x1b[4m"
#define ANSI_BLINK "\x1b[5m"
#define ANSI_INVERSE "\x1b[7m"
#define ANSI_HIDDEN "\x1b[8m"
#define ANSI_STRIKETHROUGH "\x1b[9m"

#define ANSI_RESET_BOLD "\x1b[21m"
#define ANSI_RESET_DIM "\x1b[22m"
#define ANSI_RESET_ITALIC "\x1b[23m"
#define ANSI_RESET_UNDERLINE "\x1b[24m"
#define ANSI_RESET_BLINK "\x1b[25m"
#define ANSI_RESET_INVERSE "\x1b[27m"
#define ANSI_RESET_HIDDEN "\x1b[28m"
#define ANSI_RESET_STRIKETHROUGH "\x1b[29m"

#define ANSI_UP "\x1b[%dA" // Move cursor up by n lines
#define ANSI_DOWN "\x1b[%dB" // Move cursor down by n lines
#define ANSI_RIGHT "\x1b[%dC" // Move cursor forward by n chars
#define ANSI_LEFT "\x1b[%dD" // Move cursor backward by n chars
#define ANSI_DOWN_BEGL "\x1b[%dE" // Move cursor to start of n lines down
#define ANSI_UP_BEGL "\x1b[%dF" // Move cursor to start of n lines up
#define ANSI_COLUMN "\x1b[%G" // Move cursor to column n
#define ANSI_MOVE "\x1b[%d;%dH" // Move cursor to row n, column n
#define ANSI_HOME "\x1b[H" // Move cursor to 1;1
#define ANSI_SAVE "\x1b[s" // Save cursor position
#define ANSI_USE "\x1b[u" // Restore saved cursor position

#define ANSI_CLR_SCR "\x1bc" // Clear entire screen
#define ANSI_CLR_BEGS "\x1b[1J" // Clear from cursor to beginning
#define ANSI_CLR_ENDS "\x1b[0J" // Clear from cursor to end
#define ANSI_CLR_LINE "\x1b[2K" // Clear entire line
#define ANSI_CLR_BEGL "\x1b[1K" // Clear from cursor to start of line
#define ANSI_CLR_ENDL "\x1b[0K" // Clear from cursor to end of line

#define ANSI_HIDE "\x1b[?25l" // Hide cursor
#define ANSI_SHOW "\x1b[?25h" // Show cursor

#define ANSI_COLOR_FG "\x1b[38;5;%dm" // Foreground color
#define ANSI_COLOR_BG "\x1b[48;5;%dm" // Background color

#define ANSI_END_SESSION ANSI_RESET ANSI_SHOW

void test_ansi_attributes();
