#include "Rectangle.h"
Rectangle::Rectangle() {
    width=0;
    height=0;
}
Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}
double Rectangle::getWidth() {
    return width;
}
void Rectangle::setWidth(double w) {
    width = w;
}
double Rectangle::getHeight() {
    return height;
}
void Rectangle::setHeight(double h) {
    height = h;
}
double Rectangle::getArea() {
    return width * height;
}
