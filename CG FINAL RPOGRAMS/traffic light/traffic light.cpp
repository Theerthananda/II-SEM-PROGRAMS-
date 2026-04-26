#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    rectangle(280, 100, 360, 300);

  
    circle(320, 140, 25);
    circle(320, 200, 25);
    circle(320, 260, 25);

    setfillstyle(SOLID_FILL, RED);
    floodfill(320, 140, WHITE);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(320, 200, WHITE);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(320, 260, WHITE);

    line(320, 300, 320, 400);

    getch();
    closegraph();
    return 0;
}
