#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int num = i;
        for(int j=1 ; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<num;
            num--;
        }
        num = 1;
        for(int a=1 ; a<=(i-1) ; a++){
            num++;
            cout<<num;
            
        }
        cout<<endl;
    }
}