#include<iostream>
using namespace std;
int main(){
    int x,n;
    int ans=1;
    cin>>x>>n;
    for(int i=1 ; i<=n ; i++){
        ans = ans *x;
    }
    cout<<ans;
    return 0;

}