#include<iostream>
using namespace std;
bool checkPalindrome(char a[])
{

    int i=0;
    int n=0;
    while(a[i] != 0)
    {
        n++;
        i++;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] != a[n-1-i])
        {
            return false;
        }

    }
    return true;
}

int main()
{
    int n = 1e6;
    
    char a[n];
    cin>>a;
    cout<<(checkPalindrome(a)?"true":"false");
}