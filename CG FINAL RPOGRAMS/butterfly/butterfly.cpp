#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);

    // 1. Head and Body
    circle(300, 160, 12);               
    ellipse(300, 210, 0, 360, 8, 40);   

    // 2. Right Wings (Top & Bottom)
    ellipse(340, 185, 0, 360, 40, 30);  
    ellipse(335, 225, 0, 360, 30, 20);  

    // 3. Left Wings (Top & Bottom)
    ellipse(260, 185, 0, 360, 40, 30);  
    ellipse(265, 225, 0, 360, 30, 20);  

    // 4. Small Circles on Upper Wings
    circle(355, 185, 8);                
    circle(245, 185, 8);                

    // 5. Simple Antennae
    line(295, 150, 280, 130);           
    line(305, 150, 320, 130);           

    getch();
    closegraph();
    return 0;
}
