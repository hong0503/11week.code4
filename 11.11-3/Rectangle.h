#ifndef Rectangle_h
#define Rectangle_h
class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double, double);
    double getWidth();
    void setWidth(double);
    double getHeight();
    void setHeight(double);
    double getArea();

};

#endif
