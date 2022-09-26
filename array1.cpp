#include <iostream>
#include <cmath>
#include <valarray>

using namespace std;

int main(){

    valarray <double> u(10), v(10);

    for(int i=0; i <10; i++){
        u[i] = i+1;}

    v[0] = 232;
    v[1] = 1323;
    v[2] = 21312;
    v[3] = 123213;
    v[4] = 34;
    v[5] = 98;
    v[6] = 23;
    v[7] = 10;
    v[8] = 31;
    v[9] = 69;

    cout << "u  v" << endl;

    for(int i=0; i < 10; i ++){
        cout << u[i] << "  " << v[i] << endl;}

    return 0;}