#include<iostream>
using namespace std;
int main(){
    int n;
    int c;
    cin>>n;
    cin>>c;
    int sum = 0;
    int product = 1;
    if(c==1){
        for(int i=0 ; i<=n ; i++){
            sum = sum + i;
        }
    }else if(c==2){
        for(int i=1 ; i<=n ; i++){
            product = product*i;
        }
    }else{
        cout<<-1;
    }
    if(c==1){
        cout<<sum;
    }else if(c==2){
        cout<<product;
    }
    return 0;
}
