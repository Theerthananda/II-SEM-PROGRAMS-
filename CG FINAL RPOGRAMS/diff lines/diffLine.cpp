#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    setlinestyle(SOLID_LINE,0,2);
    line(100,100,500,100);

    setlinestyle(DOTTED_LINE,0,2);
    line(100,150,500,150);

    setlinestyle(DASHED_LINE,0,2);
    line(100,200,500,200);

    setlinestyle(SOLID_LINE,0,2);
    arc(150,260,0,180,30);
    arc(210,260,180,360,30);
    arc(270,260,0,180,30);
    arc(330,260,180,360,30);

    line(100,350,150,300);
    line(150,300,200,350);
    line(200,350,250,300);
    line(250,300,300,350);

    getch();
    closegraph();
    return 0;
}
