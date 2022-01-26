// alpha pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=n ; i>=1 ; i--){
        char startChar = 'A'+i-1;
        for(int j=n ; j>=i ; j--){
            cout<<startChar;
            startChar++;
        }
        cout<<endl;
    }
}