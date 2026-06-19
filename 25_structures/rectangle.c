#include <stdio.h>

// Create a rectangle structure
typedef struct {
    double width, height;
} Rectangle; // Rectangle is the name

Rectangle createRectangle(double w, double h);
double getPerimeter(Rectangle* r);

int main(void) {
    Rectangle rect = createRectangle(15.4, 12.3);

    printf("%lf,%lf\n", rect.width, rect.height);
    printf("Perimeter: %.2lf", getPerimeter(&rect)); // Do not use r-> or just r. We need to use the address of rect


    return 0;
}

Rectangle createRectangle(double w, double h) {
    Rectangle r = {w, h};
    return r;
}

double getPerimeter(Rectangle* r) {
    return 2 * (r->width + r->height);
}