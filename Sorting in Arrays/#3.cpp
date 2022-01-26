#include<iostream>
using namespace std;
void merge(int a[], int b[], int n, int m, int c[]){
    int  i=0,j=0,k=0;
    
    while(i<n && j<m){
    if(a[i]<b[j]){
        c[k] = a[i];
        k++;
        i++;
    }else{
        c[k] = b[j];
        k++;
        j++;
    }
        
    }
    while(i<n){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<m){
       c[k]=b[j];
        k++;
        j++;
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
    for(int i=0 ; i<m ; i++){
        cin>>b[i];
    }
    int c[n+m];
    merge(a, b, n, m, c);
    for(int i=0 ; i<n+m ; i++){
        cout<<c[i]<<" ";
    }
}