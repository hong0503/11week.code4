#include <iostream>
#include <iomanip>
#include"Rectangle.h"
using namespace std;
void sortBySelection(Rectangle rectIn[], Rectangle rectOut[], int size) {
    for (int i = 0; i < size; i++) {
        int place = 0;
        for (int j = 0; j < size; j++) {
            if (rectIn[i].getArea() > rectIn[j].getArea()) {
                place++;
            }
        }
        rectOut[place] = rectIn[i];
    }
}
int main()
{
    const int arrSize = 10;
    Rectangle rectArr[arrSize], sortedArr[arrSize];
    double width, height;

    for (int i = 0; i < arrSize; i++)
    {
        cin >> width >> height;
        rectArr[i] = Rectangle(width, height);
    }
    sortBySelection(rectArr, sortedArr, arrSize);
    cout << "----- Original Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << rectArr[i].getArea() << endl;
    }
    cout << "----- Sorted Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << sortedArr[i].getArea() << endl;
    }
}