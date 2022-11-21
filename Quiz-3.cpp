#include <iostream>
#include <valarray>
#define d2_valarray valarray<valarray<double>> 

using namespace std;

void maxwhatwhere(d2_valarray matrix, double &mymax, int &rowmax, int &colmax){

    mymax = matrix[0][0];
    rowmax = 0;
    colmax = 0;
    
     for(int i=0; i< matrix.size(); i++){
        for(int j=0; j< matrix[0].size(); j++){
            if (matrix[i][j] > mymax)
            {mymax = matrix[i][j];
            rowmax = i;
            colmax = j;}}
    }}

int matrixaverage (d2_valarray matrix){
    
    double sum=0;
    int count=0;

    for(int i=0; i< matrix.size(); i++){
        for(int j=0; j< matrix[0].size(); j++){
            sum = sum + matrix[i][j];
            count += 1;}} 
    return sum / count;
}

int main(){

    d2_valarray mymat(3);
    double average, mymax;
    int colmax, rowmax;

    for(int i=0; i<3; i++){
        mymat[i].resize(3);}

    cout << "Enter a 3x3 matrix element by element!"<< endl;
    for(int i=0; i< mymat.size(); i++){
        for(int j=0; j< mymat[0].size(); j++){
            cin >> mymat[i][j];}} 

    average = matrixaverage(mymat);
    maxwhatwhere(mymat, mymax, rowmax, colmax);
    cout << "Average value= " << average << endl;
    cout << "Mymax= " << mymax << endl;
    cout << "Rowmax= " << rowmax << endl;;
    cout << "Colmax= " << colmax << endl;;
    return 0;
}

