#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    rectangle(200, 300, 600, 400);

    line(260, 300, 320, 220); 
    line(320, 220, 520, 220); 
    line(520, 220, 580, 300); 

    rectangle(340, 250, 500, 290);

    circle(300, 400, 40);
    circle(300, 400, 20);

    circle(500, 400, 40);
    circle(500, 400, 20);

    getch();
    closegraph();
    return 0;
}
