//        1
//      2 3
//    3 4 5
//  4 5 6 7

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int num = i;
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0 ;
}