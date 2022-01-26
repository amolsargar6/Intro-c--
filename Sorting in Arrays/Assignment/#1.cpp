#include<iostream>
using namespace std;
void pushZerosEnd(int a[], int n){
   int i=0,k=0;
   while(i<n && k<n){
       if(a[i]==0){
           i++;
        }else if(a[i]!=0){
            int temp = a[k];
            a[k] = a[i];
            a[i] = temp;
            i++;
            k++;
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
    pushZerosEnd(a, n);
    for(int i=0 ; i<n ; i++){
        cout<<a[i];
    }

}