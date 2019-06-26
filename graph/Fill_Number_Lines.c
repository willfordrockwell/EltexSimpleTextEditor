#include "graph.h"

void Fill_Number_Lines (WINDOW *Wnd, int begin)
{
	int Lines = 0, Cols = 0;
	getmaxyx(Wnd, Lines, Cols);
	wprintw(Wnd, "    ");
	for (int i = begin; i < Lines - 1; i++) {
		wprintw(Wnd, "%4d", i + 1);
	}
	wrefresh(Wnd);
}