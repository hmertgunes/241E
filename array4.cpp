#include <iostream>
#include <fstream>
#include <valarray>

using namespace std;

int main(){
    valarray<double> u1(3), u2(3), u3(3), u4(3);
    double sumof, mymin, mymax;

    u1[0] = 9.3;
    u1[1] = 8.3;
    u1[2] = 3.1;
    
    cout << "Sum of the array values = " << u1.sum() << endl;
    cout << "------------------" << endl;

    cout <<  "Max value of the array = " << u1.max() << endl;
    cout << "------------------" << endl;

    cout <<  "Min value of the array = " << u1.min() << endl;
    cout << "------------------" << endl;

    u2 = pow(u1, 0.5); 

    for(int i=0; i< u2.size(); i++){
        cout << u2[i] << endl;}
    cout << "------------------" << endl;

    u3 = exp(u2);
    for(int i=0; i< u3.size(); i++){
        cout << u3[i] << endl;}
    cout << "------------------" << endl;

    u4 = u2 * u3;
    for(int i=0; i< u3.size(); i++){
    cout << u4[i] << endl;}
    cout << "------------------" << endl;

    return 0;
}