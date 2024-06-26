#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    int x = getmaxx() / 2; // Get center x-coordinate of the screen
    int y = getmaxy() / 2; // Get center y-coordinate of the screen
    int radius = 100; // Set the radius of the circle

    // Draw circle
    circle(x, y, radius);
    // Close the graphics window
    delay(5000); // Display the circle for 5 seconds
    closegraph();

    return 0;
}
