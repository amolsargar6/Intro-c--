#include<iostream>
using namespace std;
void reverse(int a[], int n){
    int temp = 0;
    int i=0;
    int j=n-1;
    while(i<j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
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