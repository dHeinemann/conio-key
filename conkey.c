#include <conio.h>
#include <stdio.h>

#define ESC 27

int main() {
    char* buffer[10];
    int isextended = 0;
    int running = 1;
    int ch;

    while (running) {
        ch = _getch();
        isextended = ch == 0;
        if (isextended) {
            /*
             * 0 indicates an extended key (arrows, etc.)
             */
            ch = _getch();
            sprintf(buffer, "%i (extended)\n", ch);
        } else {
            sprintf(buffer, "%i\n", ch);
        }

        cputs(buffer);
        if (ch == ESC) {
            running = 0;
        }
    }

    return 0;
}
