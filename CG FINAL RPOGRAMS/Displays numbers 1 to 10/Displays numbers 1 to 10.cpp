#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    char str[5];
    int y = 50;

    for(int i = 1; i <= 10; i++) {
        sprintf(str, "%d", i);
        outtextxy(300, y, str);
        y += 30;
    }

    getch();
    closegraph();
    return 0;
}
