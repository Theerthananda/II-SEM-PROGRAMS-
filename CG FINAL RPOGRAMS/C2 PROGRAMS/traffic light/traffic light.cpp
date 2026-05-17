#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");
    while(!kbhit()){
    cleardevice();
    rectangle(280, 100, 360, 300);
    
    circle(320, 140, 25);
    circle(320, 200, 25);
    circle(320, 260, 25);
    line(320, 300, 320, 400);
    
    delay(1000);
    setfillstyle(SOLID_FILL, RED);
    floodfill(320, 140, WHITE);
    
	delay(1000);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(320, 200, WHITE);
    
	delay(1000);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(320, 260, WHITE);
    delay(1000);
}


    getch();
    closegraph();
    return 0;
}
