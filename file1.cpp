#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file.txt");
    if (filestream.is_open())
    {
        filestream << "welcome to skillqode";
        filestream <<" \nwe strted new lab";
        filestream << "\nwe  strted new breanch ";
        filestream.close();
    }
    else 
        cout << "file opening is fail.";
        return 0;
}