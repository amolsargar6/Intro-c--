#include<iostream>
using namespace std;
int main(){
    char a;
    a = cin.get();
    int charCount = 0;
    int spaceCount = 0;
    int numCount = 0;
    
    while(a!='$'){
        if(a>='a' && a<='z'){
            charCount++;
        }else if(a=='\n' || a=='\t' || a==' '){
            spaceCount++;
        }else if(a>='1' && a<='9'){
            numCount++;
        }
        a=cin.get();
    }
    cout<<charCount<<" "<<numCount<<" "<<spaceCount;
}