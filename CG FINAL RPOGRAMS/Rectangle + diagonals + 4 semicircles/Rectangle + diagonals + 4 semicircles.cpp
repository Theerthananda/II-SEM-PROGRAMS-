#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");


    rectangle(250,200,450,350);

 
    line(250,200,450,350);
    line(250,350,450,200);

    // top semicircle
    arc(350,200,0,180,100);

    // bottom semicircle
    arc(350,350,180,360,100);

    // left semicircle
    arc(250,275,90,270,75);

    // right semicircle
    arc(450,275,270,90,75);

    getch();
    closegraph();
    return 0;
}
