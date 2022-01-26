#include<iostream>
using namespace std;
int fib(int n){
    int fib1 = 0;
    int fib2 = 1;
    int result = 0;
    if(n<=1){
        return n;
    }
    for(int i = 0 ; i<=n-2 ; i++){
        result = fib1 + fib2;
        fib1 = fib2;
        fib2 = result;
    } 
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}