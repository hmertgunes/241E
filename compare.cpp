#include <iostream>

using namespace std;

int main()
{
    // important thing in this case is that program looking first to if condition
    int a, b, c;

    cout << "Enter the value of a!" << endl;
    cin >> a;

    cout << "Enter the value of b!" << endl;
    cin >> b;

    if (a > 0 && b > 0)
    {
        cout << "Either one of them is greater then 0" << endl;
        c = a + b;
    }
    else if (a > 0 || b > 0)
    {
        cout << "Both of them are greater then 0" << endl;
        c = a - b;
    }
    cout << "C = " << c << endl;
    return 0;
}