#include <iostream>
#include <valarray>
#include <fstream>
#include <cmath>
#define d2_valarray valarray<valarray<double>> 

using namespace std;

void adding(d2_valarray a, d2_valarray b, d2_valarray &res){
    res = (a+b);}

int main(){
    
    d2_valarray u(3), v(3), z(3);

    for(int i=0; i<3; i++){
        u[i].resize(4);}

    for(int i=0; i<3; i++){
        v[i].resize(4);}
    
    for(int i=0; i<3; i++){
        z[i].resize(4);
        u[i] = sinh((i+7)*10);
        v[i] = cos((i+5)*10);}

    adding(u, v, z);

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << z[i][j] << " ";}
        cout << endl;}

    return 0;
    }