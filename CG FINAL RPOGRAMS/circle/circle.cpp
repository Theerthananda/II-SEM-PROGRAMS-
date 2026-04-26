#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    
    circle(320, 240, 100);

    getch();
    closegraph();
    return 0;
}
