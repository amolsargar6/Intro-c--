#include<iostream>
#include<math.h>
using namespace std;
bool isPerfectSquare(int a, int b){
    if(a>=0){
        long sr1 = sqrt(a);
        long sr2 = sqrt(b);
        return ((sr1*sr1==a)||(sr2*sr2==b));
    }
}

bool checkNum(int n){
    if(n==0||n==1){
        return true;
    }
    int a = (5*n*n)-4;
    int b = (5*n*n)+4;
    bool idSquare = isPerfectSquare(a,b);
}

int main(){
    int n;
    cin>>n;
    if(checkNum(n)){
        cout<<true;
    }else{
        cout<<false;
    }
}