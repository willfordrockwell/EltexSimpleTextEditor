#include "graph.h"

void Init_Butt(
    WINDOW **Wnd_Butt, 
    WINDOW **Subwnd_Butt, 
    int Butt_Height, 
    int Butt_Length, 
    int Start_Y, 
    int Start_X,
    char *Name_Butt
)
{
    (*Wnd_Butt) = newwin(Butt_Height, Butt_Length, Start_Y, Start_X);

    wattron(*Wnd_Butt, COLOR_PAIR(1));
    wbkgd((*Wnd_Butt), COLOR_PAIR(1));

    box(*Wnd_Butt, ACS_VLINE, ACS_HLINE);

    (*Subwnd_Butt) = derwin((*Wnd_Butt), Butt_Height - 2, Butt_Length - 2, 1, 1);

    wattron((*Subwnd_Butt), A_BOLD);
    wbkgd((*Subwnd_Butt), COLOR_PAIR(1));

    wprintw((*Subwnd_Butt), Name_Butt);

    wrefresh(*Subwnd_Butt);
    
    wrefresh(*Wnd_Butt);
}