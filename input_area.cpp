#include <iostream>
#include <cmath>
#define pi 3.145

using namespace std;

int main()
{
    // we want to calculate area and circumference by r which the user entered
    int r;
    double circumference, area;

    cout << "Enter the r!" << endl;
    cin >> r;

    circumference = 2 * pi * r;
    area = pi * pow(r, 2);

    cout << "The area= " << area << endl;
    cout << "The circumference= " << circumference << endl;
    
    return 0;

}
