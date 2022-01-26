#include<iostream>
using namespace std;
int pairSum(int a[], int n, int x){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            if(a[i]+a[j]==x){
                count++;
            }
        }
    }
    return count;
} 

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int ans = pairSum(a, n, x);
    cout<<ans;
    return 0;
}