#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int max=0, secMax = 0, small=0;
    if(n==0 || n==1){
            cout<<-2147483648;
            return 0;
        }
    while(n>0){
        if(n1==n2){
            small=-2147483648;
        }else if(n1>n2){
            max=n1;
            small=n2;
        }else if(n1<n2){
            max = n2;
            small = n1;
        }
        if(secMax<small){
            secMax = small;
        }
        n1=n2;
        cin>>n2;
        n--;
    }
    cout<<secMax;
    return 0;
}