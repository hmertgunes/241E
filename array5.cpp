#include <iostream>
#include <cmath>
#include <valarray> 

using namespace std;

int main(){

    valarray<valarray<double>> u1(3);

    for(int i=0; i<u1.size(); i++){
        u1[i].resize(2);}

    u1[0][0] = 1; 
    u1[0][1] = 2;
    u1[1][0] = 3;
    u1[1][1] = 4;
    u1[2][0] = 5;
    u1[2][1] = 6;

    for(int i=0; i<u1.size(); i++){
        cout << endl;
        for(int j=0; j<u1[0].size(); j++){
            cout << u1[i][j] << "  ";}}
    
    return 0;
}
