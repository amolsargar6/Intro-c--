#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int result = 0;
    int num = 1;
    int count = 1;
    while(count<=x){
        result = 3*num + 2;
        if(result%4==0){
            num++;
            continue;
        }else{
            cout<<result<<" ";
            count++;
        }
        num++;
    }
    return 0;
}