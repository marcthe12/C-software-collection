#include <ncurses.h>

int main ()
{
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);
	int x,y, keydata;
	keydata=getch();
	while(keydata != KEY_F(10)){
		switch(keydata){
			case(KEY_F(2)):
				clear();
				break;
			case(KEY_UP):
				getyx(stdscr,y,x);
				y--;
				move(y,x);
				refresh();
				break;
			case(KEY_DOWN):
				getyx(stdscr,y,x);
				y++;
				move(y,x);
				refresh();
				break;
			case(KEY_LEFT):
				getyx(stdscr,y,x);
				x--;
				move(y,x);
				refresh();
				break;
			case(KEY_RIGHT):
				getyx(stdscr,y,x);
				x++;
				move(y,x);
				refresh();
				break;
			case(127):
			case(KEY_DC):
				delch();
				refresh();
				break;
			case(8):
			case(KEY_BACKSPACE):
				getyx(stdscr,y,x);
				x--;
				mvdelch(y,x);
				refresh();
				break;
			default:
				addch(keydata);
				refresh();
				break;
		};
	keydata=getch();
	};
	endwin();
	return (0);
}