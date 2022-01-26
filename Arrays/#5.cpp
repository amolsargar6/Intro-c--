#include<iostream>
using namespace std;
void reverse(int a[], int n){
    int temp = 0;
    int i=0;
    if(n%2==0){
        while(i<n){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            i = i+2;
        }
    }else{
        while(i<n-1){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            i = i+2;
        }
    }
}
void printArray(int a[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    reverse(a, n);
    printArray(a, n);


}