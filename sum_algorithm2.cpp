#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i, sum=0;

    for (;;)
    {
        cout << "enter i " << endl;
        cin >> i;

        if (i == -1)
        {
            cout << sum << endl;
            return 0;
        }
        sum += i;
    }
}