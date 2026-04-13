#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int a[]={25,15,35,15,30,25,40,35,30,50,25,40,30,25,25,15};

    drawpoly(8,a);



    getch();
    closegraph();
    return 0;
}




