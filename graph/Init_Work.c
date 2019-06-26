#include "graph.h"

void Init_Work(
    WINDOW **Wnd_Work, 
    WINDOW **Subwnd_Work, 
    int Work_Height,
    int Work_Length,
    int Start_Y, 
    int Start_X
)
{
    (*Wnd_Work) = newwin(Work_Height, Work_Length, Start_Y, Start_X);

    wattron((*Wnd_Work), COLOR_PAIR(1));

    box((*Wnd_Work), ACS_VLINE, ACS_HLINE);

    (*Subwnd_Work) = derwin((*Wnd_Work), Work_Height - 2, Work_Length - 2, 1, 1);

    wbkgd((*Subwnd_Work), COLOR_PAIR(1));

    // wmove(Wnd_Work, 0, 1);
	// wprintw(Wnd_Work, File_Path);

	// char buf[1];
	// while (read(file, buf, 1) > 0) {
	// 	wprintw(Subwnd_Work, "%s", buf);
	// }

    wrefresh((*Wnd_Work));
}