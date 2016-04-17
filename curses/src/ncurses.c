#include<ncurses.h>

int main(){
	initscr();
	start_color();
	init_pair(2,COLOR_YELLOW,COLOR_CYAN);
	attrset(COLOR_PAIR(1));
	printw("hello");
	refresh();
	getch();
	endwin();
	return 0;
}
