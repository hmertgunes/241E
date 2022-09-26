// operating with variables
#include <iostream>
using namespace std;

int main()
{
    // declaration of variables
    int a, b;
    int result;

    // process
    a = 5;
    b = 9;
    a = a + 1;
    result = a - b * (a * b);

    // print the result
    cout << "The Result=" << result << "\n";

    // terminate the program
    return 0;
}
