#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // center rectangle
    rectangle(300,250,500,350);

    // diagonals inside rectangle
    line(300,250,500,350);
    line(300,350,500,250);

    // top triangle
    line(300,250,400,150);
    line(400,150,500,250);

    // bottom triangle
    line(300,350,400,450);
    line(400,450,500,350);

    // left triangle
    line(300,250,200,300);
    line(200,300,300,350);

    // right triangle
    line(500,250,600,300);
    line(600,300,500,350);

    getch();
    closegraph();
    return 0;
}
