#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // rectangle
    rectangle(200,200,500,350);

    // diagonals
    line(200,200,500,350);
    line(200,350,500,200);

    getch();
    closegraph();
    return 0;
}
