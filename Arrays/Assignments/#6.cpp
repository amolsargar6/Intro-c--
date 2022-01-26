#include<iostream>
using namespace std;
void sortZeroAndOne(int a[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]==0 && a[j]==0){
            i++;
        }
        if(a[i]==1 && a[j]==1){
            j--;
        }
        if(a[i]==1 && a[j]==0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        if(a[i]==0 && a[j]==1){
            i++;
            j--;
        }
    }
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
    sortZeroAndOne(a, n);
}