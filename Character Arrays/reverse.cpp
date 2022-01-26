#include<iostream>
using namespace std;
int length(char a[])
{
    int n = 0;
    for(int i=0 ; a[i] != '\0' ; i++)
    {
        n++;
    }
    return n;
}

void reverse(char a[])
{
    int n = length(a);
    int i=0;
    int j=n-1;
   while(i<j)
    {
       char temp = a[i];
       a[i] = a[j];
       a[j] = temp;
       i++;
       j--;
    }
}

int main()
{
    int n;
    cin>>n;
    char a[n];
    cin.ignore();
    
    cin.getline(a, n);
    cin.ignore();
    reverse(a);
    cout<<a;
}