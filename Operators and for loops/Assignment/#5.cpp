#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    long n;
    long no=0;
    
    cin >> n;
    
    long int i=0;
    for (i=0;n>=1;i++)
    {
        int r=n%2;
        n=n/2;
        long x=pow(10,i);
        no=no+(r*x);  
    } 
    
    
    
    cout << no;
    
    return 0;
}