#include<iostream>
using namespace std;
void convert(int s, int e, int w){
    for(int i=s ; i<=e ; i=i+w){
        int ans = (i-32)*(5.0/9);
        cout<<i<<" "<<ans<<endl;
    }
    
}

int main(){
    float s,e,w;
    cin>>s>>e>>w;
    convert(s, e, w);
    return 0;
}