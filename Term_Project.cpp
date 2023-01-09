// 090210128 Hasan Mert Güneş
// This project includes the Bessel function of the first kind that frequently used physics and engineering 
// Program will find the desired number of peak values using by "Jn(x) = BesselJ(n,x) = ∫cos(𝑥 sin(𝜃) − 𝑛𝜃)𝑑𝜃" definition
// Then, will put them in a vector and print that vector one element on each line

#include <iostream>
#include <valarray>
#define pi 3.141593

using namespace std;

double fHMG(int n, double x, double theta){

    // This function calculates and returns: res = cos(𝑥 sin(𝜃) − 𝑛𝜃)

    double res;
    res = cos(x * sin(theta) - n*theta);
    return res;
}


double besseljHMG(int n, double x){

    // This function calculates and returns res = 1/𝜋 ∫ cos(𝑥 sin(𝜃) − 𝑛𝜃)𝑑𝜃 "(0 --> 𝜋)"
    // "(0 --> 𝜋)" a=0.0, b=pi, "(a --> b)"
    // using by Euler quadrature method

    double res=0.0, zi, a=0.0, b=pi;
    int M = 10000;

    // This loop calculates the sum of f(zi) elements i=1 to M, "Euler Quadrature Method"
    for(int i=1; i < M; i++){
        zi = a + (i-1) * (b-a) / M;
        res = res + fHMG(n, x, zi);}

    // The factor 1/𝜋 in the integral representation and multiplication by (b-a)/M
    res = res * (b-a) / M / pi; 
    return res;
}


void findmypeaksHMG(valarray<double> v, valarray<double> &peaks){

    // This void function finds the first N peaks and puts them in the vector "peaks"

    // j=0 for the second loop doesn't start from 0 over and over
    int j=0;

    // First for loop reaches out the elements of the vector v     
    for(int i=1; i < v.size()-1; i++){

        // If condition for returning the values which bigger than both next and previous ones
        if( v[i] > v[i-1] and v[i] > v[i+1] ){

            // The second loop puts them in the vector "peaks"
            for(j; j<peaks.size(); j++){
                peaks[j] = v[i];
                j = j + 1;
                break;
            }
        }
    }
}


int main(){
    
    // The main program sets the values and brings together all the essentials

    int num1=9000 , num2=10, num3=8;
    double h=0.09, initial= 0.0;
    valarray<double> myvals(num1), mybessel(num1), mypeaksHMG(num2);

    // The first element of the vector “myvals” is the number “initial”
    myvals[0] = initial;

    // Forming the vector "myvals" as initial+h, initial+2*h, initial+3*h, etc.
    for(int i=1; i< myvals.size(); i++){
        myvals[i] = initial + i*h;}

    // Forming the vector "mybessel" as ith element is besseljHMG(num3,myvals[i])
    for(int i=0; i< mybessel.size(); i++){
        mybessel[i] = besseljHMG(num3, myvals[i]);}

    // Forming the vector "mypeaksHMG" by using the void function "findmypeaksHMG""
    findmypeaksHMG(mybessel, mypeaksHMG);

    // This for loop displays the values of the result "mypeaksHMG" one element on each line
    for(int i=0; i<mypeaksHMG.size(); i++){
        cout << mypeaksHMG[i] << endl;}

    return 0;
}
