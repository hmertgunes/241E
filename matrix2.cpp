#include <iostream>
#include <fstream>
#include <valarray>
#include <cmath>
#define d2_valarray valarray<valarray<double>> 

using namespace std;

d2_valarray add_matrices(d2_valarray mat1, d2_valarray mat2){
    d2_valarray mat3(mat1.size());
    for(int i=0; i< mat1.size(); i++){
        mat3[i].resize(mat1[0].size());}
    mat3 = (mat1 + mat2);
    return mat3;}

int main(){

    d2_valarray u(3), v(3), z(3);

    for(int i=0; i< u.size(); i++){
            u[i].resize(2);
            v[i].resize(2);
            z[i].resize(2);}

    u[0][0] = 2;
    u[0][1] = 33;
    u[1][0] = 45;
    u[1][1] = 653;
    u[2][0] = -92;
    u[2][1] = -23;

    v[0][0] = 23;
    v[0][1] = 34;
    v[1][0] = 766;
    v[1][1] = 213213123;
    v[2][0] = 34;
    v[2][1]= 234;

    z = add_matrices(u, v);

    for(int i=0; i< z.size(); i++){
        for(int j=0; j< z[0].size(); j++){
            cout << z[i][j] << " ";}
            cout << endl;} 
    
    ofstream myfile;
    myfile.open("matrix2.txt");

    if(myfile.is_open()){
        for(int i=0; i<z.size(); i++){
            for(int j=0; j< z[0].size(); j++){

                myfile << z[i][j] << " ";
            }
            myfile << endl;
        }    
    }
    
    else{
        cout << "Can't access the txt file!!" << endl;}

    
    return 0;}