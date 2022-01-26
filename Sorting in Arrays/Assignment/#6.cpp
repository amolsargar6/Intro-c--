#include<iostream>
using namespace std;
void sumOfTwoArrays(int a[], int n, int b[], int m, int c[]){
    int i = n-1;
    int j = m-1;
    int size =  max(n, m);
    int carry = 0;
    while(size>=0){
        int result =  carry;
        if(i>=0){
            result = result + a[i];
        }
        if(j>=0){
            result = result + b[j];
        }
        c[size] =(result % 10);
        carry = result/10;
        i--;
        j--;
        size--;
    }
    if(carry != 0){
        cout<<carry;
    }
    for(int i=0 ; i<size ; i++){
        cout<<c[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[n];
    }
    cin>>m;
    int b[m];
    for(int i=0 ; i<m ; i++){
        cin>>b[m];
    }
    int size = 1+ max(n, m);
    int c[size];
    sumOfTwoArrays(a, n, b, m, c);
    for(int i=0 ; i<size ; i++){
        cout<<c[i]<<" ";
    }
}