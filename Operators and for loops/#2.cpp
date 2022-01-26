#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime = true;
    int num = 2;
    while(num<=n){
        for(int i=2 ; i<=num-1 ; i++){
            if(num%i==0){
                isPrime = false;
                break;
            }else{
                isPrime = true;
            }
        }
        if(isPrime == true){
            cout<<num<<endl;
        }
        num++;
    }
    return 0;
}