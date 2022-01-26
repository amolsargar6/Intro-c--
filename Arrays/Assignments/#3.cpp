#include<iostream>
#include<climits>
using namespace std;
void intersection(int a[], int b[], int n, int m){
    int c[100];
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(a[i]==b[j]){
                c[count]=a[i];
                count++;
                b[j]=INT_MIN;
                break;
            }
        }
    }
    for(int i=0 ; i<count ; i++){
        cout<<c[i]<<" ";
    }

}

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i =0 ; i<m ; i++){
        cin>>b[i];
    }
    intersection(a, b, n, m);
}