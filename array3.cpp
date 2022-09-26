#include <iostream>
#include <valarray>
#include <cmath>
#include <fstream>

using namespace std;

valarray<double> sumvec(valarray<double> a, valarray<double> b){
    
    int dimension = a.size();
    valarray<double> finalvec(dimension); 
    finalvec = (a+b);
    return finalvec;}

int main(){

    valarray<double> u(12), v(12), sumofvec(12);

    for(int i=0; i<12; i++){
        u[i] = sinh(i+20);
        v[i] = cosh(i+90);}

    ofstream myfile;
    myfile.open("array3.txt");

    if(myfile.is_open()){
        sumofvec = sumvec(u,v);
        for(int i=0; i<12; i++){
        myfile << u[i] << "  +  " << v[i] << "  =  " << sumofvec[i] << endl;}}

    else{
        cout << "Can't open the file txt!!" << endl;}

    return 0;
}

