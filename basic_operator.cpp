#include <iostream>
#include <cmath>
#define pi 3.145

using namespace std;

int main()
{
    // calculate the circumference or area of a circle with using if else conditions
    // if r >= 100, then calculate circumference
    // else, calculate area

    int r;
    double circumference, area;

    cout << "Please enter the r!" << endl;
    cin >> r;

    if (r >= 100)
    {
        circumference = 2 * pi * r;
        cout << "The Circumference is equal to: " << circumference << endl;
    }

    else 
    {
        area = pi * pow(r, 2);
        cout << "The area is equal to: " << area << endl;

    }

    return 0;
}