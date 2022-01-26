#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int i=1;
    bool isDecr = true;
    while(i<=n-2){
        if(n1 == n2){
            cout<<"false";
            return 0;
        }else if(n1>n2 && isDecr==false){
            cout<<"false";
            return 0;
        }else if(n1<n2){
            isDecr = false ;
        }
        n1 = n2;
        cin>>n2;
        i++;
    }
   cout<<"true";
    return 0;
}