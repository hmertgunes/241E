#include <iostream>

using namespace std;

int mult(int one, int two)
{
    int result = one * two;
    return result;
}

float div(float one, float two)
{
    float result = one / two;
    return result;
}

int main()
{
    int one = 4, two = 5;
    float onef= 9.0, twof= 3.0;
    
    cout << one << " * " << two << " = " << mult(one, two) << endl;
    cout << onef << " / " << twof << " = " << div(onef, twof) << endl;
    return 0;
}