#include<iostream>
using namespace std;
void sort012(int a[], int n){
    int i=0;
    int nz = 0;
    int nt = n-1;
    while(i<=nt){
        if(a[nt] == 2){
            nt--;
        }
       
        if(a[i]==0){
            int temp = a[i];
            a[i] = a[nz];
            a[nz] = temp;
            i++;
            nz++;
        }else if(a[i]==2){
            int temp = a[i];
            a[i] = a[nt];
            a[nt] = temp;
            nt--;
        }else if(a[i]==1){
            i++;
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort012(a, n);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}