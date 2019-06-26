#graph
CC = gcc
CCFLAGS = -g

LIBRARY = graph
LIBRARY_SOURCES = Delete_Windows.c 
LIBRARY_SOURCES += End_Window.c 
LIBRARY_SOURCES += Fill_Number_Lines.c 
LIBRARY_SOURCES += Init.c 
LIBRARY_SOURCES += Init_Butt.c 
LIBRARY_SOURCES += Init_Line_Window.c 
LIBRARY_SOURCES += Init_Work.c 
LIBRARY_SOURCES += Out_Str_Window.c 
LIBRARY_SOURCES += Sig_Winch.c
LIBRARY_OBJECTS = $(LIBRARY_SOURCES:.c=.o)

all: libgraph

libgraph: $(LIBRARY_OBJECTS)
	ar rc lib$(LIBRARY).a $(LIBRARY_OBJECTS)

$(LIBRARY_OBJECTS): $(LIBRARY_SOURCES)
	$(CC) $(LIBRARY_SOURCES) -c $(CCFLAGS)