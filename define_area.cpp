#include <iostream>
#include <cmath>
#define pi 3.145

using namespace std;

int main()
{
    // we want to calculate area and circumference of a circle
    int r = 5;
    double circumference, area;

    circumference = 2 * pi * r;
    area = pi * pow(r,2);

    cout << "Area of the circle= " << area << endl;
    cout << "Circumference of the circle= " << circumference << endl ;

    return 0;

}