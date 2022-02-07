/*

Title: styrer42_a.cpp

Author: Sean Tyrer

Date: February 4, 2022

Purpose: Perform Consecuitive algorithm on two non-negative, non-zero integers

*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
     
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);
    int t = min(m,n);

    if(argc != 3)
	{
		cout << "\n\nUsage:  commandLine.exe m and n\n";
        cout << "(where m and n are non-zero, non-negative integers)" << endl;
		return 1; 
	}
    else if(m == 0 || n == 0)
        cout << "GCD("<<m<<","<< n << ")  is undefinied " << endl;
    else
    {    
        while (t > 0 ){
            t = t-1; 
            if (m % t == 0 && n % t ==0)
            {
                break;
            }
            else if (m % t == 0)
            {
                cout << "Checked n: (" << n << ", " << t <<  ") is " << n%t << endl;
            }
            
            cout << "GCD(" << m << "," << t << ") = " << m%t<<  endl;   
            cout << endl;
        }
        cout << "GCD("<<m<<","<<n<<") is " << t << endl;

        
    }
    

 return 0;
}