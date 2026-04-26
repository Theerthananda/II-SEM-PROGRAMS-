#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // Scalene Triangle
    line(50,200, 120,100);
    line(120,100, 180,220);
    line(180,220, 50,200);

    // Isosceles Triangle
    line(250,200, 300,100);
    line(300,100, 350,200);
    line(350,200, 250,200);

    // Equilateral Triangle
    line(450,200, 500,100);
    line(500,100, 550,200);
    line(550,200, 450,200);

    // Acute Triangle
    line(50,350, 120,270);
    line(120,270, 180,350);
    line(180,350, 50,350);

    // Obtuse Triangle
    line(250,350, 350,300);
    line(350,300, 400,350);
    line(400,350, 250,350);

    // Right Triangle
    line(500,350, 500,270);
    line(500,350, 580,350);
    line(500,270, 580,350);

    getch();
    closegraph();
    return 0;
}
