#include "graph.h"

void Out_Str_Window(WINDOW *Wnd, int Start_Y, int Start_X, char *Input)
{
    wmove(Wnd, Start_Y, Start_X);
    wprintw(Wnd, "%s", Input);
    wrefresh(Wnd);
}