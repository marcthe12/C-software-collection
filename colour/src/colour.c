#include <ncurses.h>

int main ()
{
	initscr();
	noecho();
	raw();
	keypad(stdscr, TRUE);
	int x,y;
	int key=getch();
	while(key != KEY_F(10)){
		switch(key){
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
			default:
				printw("%c",key);
				refresh();
				break;
		};
	key=getch();
	};
	endwin();
	return (0);
}