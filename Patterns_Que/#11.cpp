#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        int a=i;
        for(int k=1 ; k<=i ; k++){
            cout<<a;
            a++;
        }
        int num = 2*i-2;
        for(int x=1 ; x<=i-1 ; x++){
            
            cout<<num;
            num--;
        }
        cout<<endl;
    }
    return 0;
}