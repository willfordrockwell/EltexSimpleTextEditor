#include "EltexSimpleTextEditor.h"

int main(int argc, char ** argv)
{

	if (argc != 2) {
		//TODO: run a window with open file
		fprintf(stdout, "No input file\n");
		return 0;
	}

	int file = open(argv[1], O_RDONLY);

	WINDOW **Wnd_Work = (WINDOW**) malloc (sizeof(WINDOW)); 
    WINDOW **Subwnd_Work = (WINDOW**) malloc (sizeof(WINDOW));

    WINDOW **Wnd_Open = (WINDOW**) malloc (sizeof(WINDOW));
    WINDOW **Subwnd_Open = (WINDOW**) malloc (sizeof(WINDOW));

    WINDOW **Wnd_Save = (WINDOW**) malloc (sizeof(WINDOW));
    WINDOW **Subwnd_Save = (WINDOW**) malloc (sizeof(WINDOW));

    WINDOW **Wnd_Exit = (WINDOW**) malloc (sizeof(WINDOW));
    WINDOW **Subwnd_Exit = (WINDOW**) malloc (sizeof(WINDOW));

    WINDOW **Wnd_Line = (WINDOW**) malloc (sizeof(WINDOW));

	Init(
		Wnd_Work,
    	Subwnd_Work,
    	Wnd_Open,
    	Subwnd_Open,
    	Wnd_Save,
    	Subwnd_Save,
    	Wnd_Exit,
    	Subwnd_Exit,
    	Wnd_Line
	);
	//Out file name
	Out_Str_Window((*Wnd_Work), 0, 1, argv[1]);
	Delete_Windows(
		(*Wnd_Work),
    	(*Subwnd_Work),
    	(*Wnd_Open),
    	(*Subwnd_Open),
    	(*Wnd_Save),
    	(*Subwnd_Save),
    	(*Wnd_Exit),
    	(*Subwnd_Exit),
    	(*Wnd_Line)
	);
	getch();
	End_Window();
	free(Wnd_Work);
    free(Subwnd_Work);
    free(Wnd_Open);
    free(Subwnd_Open);
    free(Wnd_Save);
    free(Subwnd_Save);
    free(Wnd_Exit);
    free(Subwnd_Exit);
    free(Wnd_Line);
	exit(EXIT_SUCCESS);
}
