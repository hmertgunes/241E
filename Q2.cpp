#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// If x and y are non-zero and positive.
double hypotenus_calculator(double x, double y){
    return sqrt(pow(x, 2) + pow(y, 2));}

// Main function of the program
int main(){

    double x, y, hypotenuse;

    cout << "Please enter the x number!" << endl;
    cin >> x;
    cout << "Please enter the y number!" << endl;
    cin >> y;

    if( x <= 0.0 || y <= 0.0 ){
        cout << "No Triangle!!" << endl;}
    
    else{
        hypotenuse = hypotenus_calculator(x, y);

        ofstream myfile;
        myfile.open("hypo.txt");
        
        cout << hypotenuse << endl;
        myfile << hypotenuse;
        myfile.close();}

    return 0;}