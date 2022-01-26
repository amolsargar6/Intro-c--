#include<iostream>
using namespace std;
int main(){
    int n;
    int Sum_of_Even_Digits=0;
    int Sum_of_Odd_Digits=0;
    cin>>n;
    int demo = n;
    while(demo>0){
        int lastDigit = demo%10;
        if(lastDigit%2==0){
            Sum_of_Even_Digits = Sum_of_Even_Digits + lastDigit;
        }else{
            Sum_of_Odd_Digits = Sum_of_Odd_Digits + lastDigit;
        }
        demo = demo/10;
    }
    cout<<Sum_of_Even_Digits<<endl;
    cout<<Sum_of_Odd_Digits<<endl;
    return 0;
}