#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int colors[] = {RED, YELLOW, GREEN, CYAN, BLUE, MAGENTA, WHITE};

    int radius = 120;

    for(int i = 0; i < 7; i++) {
        setfillstyle(SOLID_FILL, colors[i]);
        pieslice(320, 240, 0, 180, radius);
        radius -= 15;
    }

    getch();
    closegraph();
    return 0;
}





