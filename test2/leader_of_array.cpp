#include<iostream>
using namespace std;
void printLeaders(int a[], int n)
{
    int i=0;
    while(i<n)
    {
        int j=i+1,flag = 0;
        while(j<n)
        {
            if(a[i]<a[j])
            {
               flag = 1;
            }
            j++;
        }
        if(flag==0)
        {
            cout<<a[i]<<" ";
        }
        i++;
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    printLeaders(a, n);
}