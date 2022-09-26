#include <valarray>
#include <iostream>
#include <cmath>

using namespace std;

valarray<double> sumofvec(valarray<double> a, valarray<double> b){
    return (a+b);
};

int main(){

    valarray<double> sumvec(10), u(10), v(10);

    for(int i=0; i<10; i++){
        u[i] = sin(i+100);
        v[i] = cos(i-290);}

    sumvec = sumofvec(u, v);

    cout << "u  v  sumvec" << endl;

    for(int i=0; i<10; i++){
        cout << u[i] << "  " << v[i] << "  " << sumvec[i] << endl;}

    return 0;
}