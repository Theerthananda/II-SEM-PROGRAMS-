#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    circle(300,200,20);
    circle(300,200,40);
    circle(300,200,60);
    circle(300,200,80);
    circle(300,200,100);

    getch();
    closegraph();
    return 0;
}
