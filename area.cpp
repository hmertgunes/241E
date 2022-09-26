#include <iostream>
using namespace std;

int main()
{
    double r = 5.0;
    double pi = 3.14159;
    double area, circumference;

    circumference = 2 * pi * r;
    area = pi * r * r;

    cout << "Area= " << area << "\n";
    cout << "circumference=" << circumference << "\n";

    return 0;
}