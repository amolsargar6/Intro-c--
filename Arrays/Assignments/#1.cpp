#include<iostream>
using namespace std;
int findUnique(int a[], int n){
    int count;
    for(int i=0 ; i<n ; i++){
        count = 0;
        for(int j=0 ; j<n ; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==1){
            return a[i];
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
    cout<<findUnique(a, n)<<endl;
}