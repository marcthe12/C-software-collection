#include <ncurses.h>

int main ()
{
	initscr();
	no_echo();
	cbreak();
	key_pad(stdscr,True);
	int key=getch();
	while(!key==27){
		switch(key)
			case(KEY_UP)
			case(KEY_DOWN)
	};
	endwin();
	return (0);
}
