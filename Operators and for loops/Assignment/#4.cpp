#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1;
    int result = 0;
    while(n>0){
        int lastDigit = n%10;
        result =  result + x*lastDigit;
        x = x*2;
        n = n/10;
    }
    cout<<result;
    return 0;
}