#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin>>a[i][j];
        }
    }
    int i=0;
    while(i<m)
    {
        int count =0 ;
        while(count < m-i)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
            count++;
        }
        i++;
    }
   
}