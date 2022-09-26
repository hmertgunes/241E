#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    for (num1=2; num1<4; num1++)
    {
        for (num2=11; num2 < 11; num2++)
        {
            cout << num1 << " times " << num2 << " is equal to " << num1 * num2 << endl;
        }
        cout << "*************************************" << endl;
    }
    return 0;
}