#include<iostream>
using namespace std;
void arrange(int a[] , int n){
    if(n==0){
        return;
    }
    
    int val = 1;
    int s = 0;
    int e = n-1;
    
    while (val<=n){
        a[s]=val;
        val++;
        a[e]=val;
        val++;
        s++;
        e--;
    }
    if(n%2!=0){
        a[(s+e)/2] = a[(s+e)/2] -1;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    arrange(a,n);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}