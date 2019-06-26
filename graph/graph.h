#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <termios.h>
#include <curses.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void Sig_Winch(int signo);

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
);

void Init_Work(
    WINDOW **Wnd_Work, 
    WINDOW **Subwnd_Work, 
    int Work_Height,
    int Work_Length,
    int Start_Y, 
    int Start_X
);

void Init_Line_Window(
    WINDOW **Wnd_Line,
    int Window_Heigth,
    int Window_Length,
    int Start_Y,
    int Start_X
);

void Fill_Number_Lines (WINDOW *Wnd, int begin);

void Init_Butt(
    WINDOW **Wnd_Open, 
    WINDOW **Subwnd_Open, 
    int Butt_Height, 
    int Butt_Length,
    int Start_Y, 
    int Start_X,
    char *Name_Butt
);

void Out_Str_Window(WINDOW *Wnd, int Start_Y, int Start_X, char *Input);

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
);

void End_Window();
