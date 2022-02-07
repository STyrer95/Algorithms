/*

Title: styrer42_a.cpp

Author: Sean Tyrer

Date: February 4, 2022

Purpose: Perform Euclid's algorithm on two non-negative, non-zero integers

*/



#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
     
    int r;
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);


    if(argc != 3)
	{
		cout << "\n\nUsage:  commandLine.exe m and n\n";
        cout << "(where m and n are non-zero, non-negative integers)" << endl;
		return 1; 
	}
    else if (m == 0 || n == 0)
        cout << "GCD(" << m <<"," << n << ")  is undefinied " << endl;
    else
    {    
        cout << "GCD(" << argv[1] << "," << argv[2] <<") = " << endl; 
        cout << endl;
        while ((m % n) > 0){
            r = m % n;
            cout << "GCD(" << r << ", " << "(" << m << "," << n <<")) = " << endl;
            cout << endl;
            m = n;
            n = r;
               
        }
        cout << "GCD(" << argv[1] << "," << argv[2] << ") is " << r << endl;
    }

 return 0;
}