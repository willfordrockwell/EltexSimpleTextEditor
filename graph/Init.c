#include "graph.h"

void Init(
    WINDOW **Wnd_Work,
    WINDOW **Subwnd_Work,
    WINDOW **Wnd_Open,
    WINDOW **Subwnd_Open,
    WINDOW **Wnd_Save,
    WINDOW **Subwnd_Save,
    WINDOW **Wnd_Exit,
    WINDOW **Subwnd_Exit,
    WINDOW **Wnd_Line
) 
{
    struct winsize size;
	ioctl(fileno(stdout), TIOCGWINSZ, (char *) &size);
	int Butt_Height = 3; 
    int Butt_Length = 10;
    int Rows = size.ws_row;
    int Cols = size.ws_col;
    int Line_Length = 4;
	int Start_X = Line_Length; 
    int Start_Y = Rows - Butt_Height;
	initscr();
	signal(SIGWINCH, Sig_Winch);

	start_color();
	curs_set(0);
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	
    wbkgd(stdscr, COLOR_PAIR(1));
    wattron(stdscr, A_BOLD);
    refresh();

    Init_Work(
        Wnd_Work, 
        Subwnd_Work, 
        Rows - Butt_Height, 
        Cols - Line_Length, 
        0, 
        Line_Length
    );
    Init_Butt(
        Wnd_Open, 
        Subwnd_Open, 
        Butt_Height, 
        Butt_Length, 
        Start_Y, 
        Start_X,
        "F1 Open"
    );
    Init_Butt(
        Wnd_Save, 
        Subwnd_Save, 
        Butt_Height, 
        Butt_Length, 
        Start_Y, 
        Start_X = Start_X + Butt_Length,
        "F2 Save"
    );
    Init_Butt(
        Wnd_Exit, 
        Subwnd_Exit, 
        Butt_Height, 
        Butt_Length, 
        Start_Y, 
        Start_X = Start_X + Butt_Length,
        "F3 Exit"
    );
    Init_Line_Window(Wnd_Line, Rows - Butt_Height - 1, Line_Length, 0, 0);
    Fill_Number_Lines((*Wnd_Line), 0);
}