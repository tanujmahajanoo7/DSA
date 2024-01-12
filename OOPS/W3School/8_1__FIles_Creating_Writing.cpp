#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile("8_1__Files.txt");

    myfile<<"This is my first file created through c++ code \n ";
    myfile<<"This sentence is for reading the 2 line in next program \n ";
    
    myfile.close();
    
    return 0;
}