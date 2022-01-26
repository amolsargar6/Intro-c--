#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int sum = 0;
    
    
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<m ; j++)
        {
            
            cin>>a[i][j];
        }
    }
    
    for(int i=0 ; i<m ; i++)
    {
        sum = 0;

		for(int j=0 ; j<n ; j++)
        {
            sum = sum + a[j][i];
        }
        cout<<sum<<" ";
    }
  
}