#include <iostream>

using namespace std;

int main()
{
    int i, sum=0;

    for (;;)
    {
        if (i == -1)
        {   
            sum -= i;
            cout << "The sum is equal to " << sum << endl;
            return 0;
        }

        cout << "Enter the i" << endl;
        cin >> i;
        sum += i;
    }
}