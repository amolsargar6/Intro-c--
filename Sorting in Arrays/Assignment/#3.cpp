#include<iostream>
#include<climits>
using namespace std;
void findSecMax(int a[], int n){
    int max = INT_MIN;
    int secMax = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(a[i]>max){
            secMax = max;
            max = a[i]; 
        }else if(a[i]>secMax && a[i] != max){
            secMax = a[i];
        }
         
    }
    cout<<secMax<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    findSecMax(a, n);
}