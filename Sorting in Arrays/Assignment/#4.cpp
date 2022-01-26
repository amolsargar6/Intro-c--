#include<iostream>
#include<climits>
using namespace std;
int arrayRotateCheck(int a[], int n){
    if(n==0){
		return 0;
    }
    int min = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(a[i]<min){
            min = a[i];
        }
    }

    for(int i=0 ; i<n ; i++){
        if(a[i]==min){
           return i;
        }
    }
    // int count = 0;
    // while(a[0]!=min){
    //     int i=0;
    //     int temp = a[0];
    //     while(i<n-1){
    //         a[i] = a[i+1];
    //         i++;
    //     }
    //     count++;
    //     a[n-1]=temp;
    // }

    // return count;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<arrayRotateCheck(a, n)<<endl;
}