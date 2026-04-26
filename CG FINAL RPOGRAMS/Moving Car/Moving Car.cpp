#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int x = 0;
    int lineOffset = 0;

    while(!kbhit()) {
        cleardevice();

        rectangle(200 + x, 300, 600 + x, 400);

        line(260 + x, 300, 320 + x, 220);
        line(320 + x, 220, 520 + x, 220);
        line(520 + x, 220, 580 + x, 300);

        rectangle(340 + x, 250, 500 + x, 290);

        circle(300 + x, 400, 40);
        circle(300 + x, 400, 20);

        circle(500 + x, 400, 40);
        circle(500 + x, 400, 20);

        for(int i = 0; i < 640; i += 40) {
            line(i + lineOffset, 450, i + 20 + lineOffset, 450);
        }

        delay(30);

        x += 5;
        lineOffset -= 5;

        if(x > 200) x = 0;
        if(lineOffset < -40) lineOffset = 0;
    }

    getch();
    closegraph();
    return 0;
}
