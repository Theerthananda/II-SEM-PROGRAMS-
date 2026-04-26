#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);

    arc(300, 200, 180, 360, 100); 

    ellipse(300, 200, 0, 360, 100, 25);

    ellipse(240, 140, 90, 270, 30, 60); 
    ellipse(215, 140, 270, 450, 30, 60); 

    line(200, 200, 210, 180);

    ellipse(300, 200, 0, 180, 90, 20);

    getch();
    closegraph();
    return 0;
}
