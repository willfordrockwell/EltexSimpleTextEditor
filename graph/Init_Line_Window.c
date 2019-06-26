#include "graph.h"

void Init_Line_Window(
    WINDOW **Wnd_Line,
    int Window_Heigth,
    int Window_Length,
    int Start_Y,
    int Start_X
)
{
    (*Wnd_Line) = newwin(Window_Heigth, Window_Length, Start_Y, Start_X);

    wattron((*Wnd_Line), COLOR_PAIR(1));
    wbkgd((*Wnd_Line), COLOR_PAIR(1));
    wrefresh((*Wnd_Line));
}