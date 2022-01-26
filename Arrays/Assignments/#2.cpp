#include<iostream>
using namespace std;
int duplicateNumber(int a[], int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<duplicateNumber(a, n)<<endl;
}