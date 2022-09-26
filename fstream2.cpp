#include <iostream>
#include <fstream>

using std::cout, std::ofstream;

int main()
{
    ofstream myfile;
    myfile.open("fstream2.txt");

    if ( myfile.is_open())
    {
        myfile << "The file is open and I can write whatever I want. \n";
        myfile.close();
    }

    else
    {
        cout << "The file is unable to write right now!! \n";
    }
    return 0;
}