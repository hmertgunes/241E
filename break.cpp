#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Starting point" << endl;
    cin >> n;

    for (n; n > 0; n--)
    {
        cout << n << endl;

        if (n == 3)
        {
            cout << "Countdown aborted!!" << endl;
            break;
        }
    }
    return 0;
}