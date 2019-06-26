#include "graph.h"

void Delete_Windows(
    WINDOW *Wnd_Work,
    WINDOW *Subwnd_Work,
    WINDOW *Wnd_Open,
    WINDOW *Subwnd_Open,
    WINDOW *Wnd_Save,
    WINDOW *Subwnd_Save,
    WINDOW *Wnd_Exit,
    WINDOW *Subwnd_Exit,
    WINDOW *Wnd_Line
)
{
    delwin(Wnd_Work);
    delwin(Subwnd_Work);
    delwin(Wnd_Open);
    delwin(Subwnd_Open);
    delwin(Wnd_Save);
    delwin(Subwnd_Save);
    delwin(Wnd_Exit);
    delwin(Subwnd_Exit);
    delwin(Wnd_Line);
}