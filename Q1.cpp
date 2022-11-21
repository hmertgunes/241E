#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{   
    int readnumber,number, i;
    
    cout << "Enter an integer pls!!" << endl;
    cin >> number;

    ofstream myfile;
    myfile.open("tofile.txt");

    // Writing to file
    if ( myfile.is_open() ){
        for (i=0; i <= number; i++){
            myfile << i << endl;}}
    else {
        cout << "Can't open the file!!" << endl;
        return 0;}

    myfile.close();
    
    // Reading from file
    ifstream myfile_read;
    ofstream myfile2;
    myfile_read.open("tofile.txt");
    myfile2.open("toexp.txt");

    while (!myfile_read.eof()){
        myfile_read >> readnumber;
        myfile2 << exp(readnumber) << endl;}

    myfile.close();
    myfile2.close();
    
    return 0;
}