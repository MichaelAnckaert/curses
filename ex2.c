#include <ncurses.h>

int main() {
  int ch;

  initscr();
  raw();
  keypad(stdscr, TRUE);
  noecho();

  printw("Type any character to see it in bold\n");
  ch = getch();

  if (ch == KEY_F(1))
    printw("F1 key pressed\n");
  else {
    printw("The pressed key is ");
    attron(A_BOLD);
    printw("%c\n", ch);
    attroff(A_BOLD);
  }
  printw("Press any key to exit\n");
  refresh();
  getch();
  endwin();

  return 0;
}
