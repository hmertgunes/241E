#include <cmath>
#include <iostream>

using namespace std;

double f(double x){

    return  sin(x)*cos(x);
}


double trapezoid(double a, double b, double N){

    double x_k, h, sum;

    h = (b-a) / N;

    for(a; a<b; a+=h){
        sum = sum + f(a);
    }

    sum = sum - f(a) - f(b);
    return h * 1/2 * (2*sum + f(a) + f(b));
}


int main(){

    double a=0.0, b=1.0, myres;
    double N = 1000.0;
    
    myres = trapezoid(a, b, N);
    cout << myres << endl;

    return 0;
}
