#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max= INT_MIN, secMax = INT_MIN;

    int num;
    int count = 1;
    while(count <= n){
        cin>>num;
        if(num>max){
            secMax = max;
            max = num;
        }else if(num>secMax && num!=max){
            secMax = num;
        }
        count++;
    }
    cout<<secMax<<endl;
}