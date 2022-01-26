#include<iostream>
using namespace std;
#include<cstring>
string getCompressedString(string &input) {
    // Write your code here.
    if(input.length() == 1){
        return input;
    }
    string res = "";
    char curr = input[0];
    int count = 1;
    for(int i = 1 ;i < input.length() ; i++){
        if(input[i] == curr){
            count++;
        }else if(count >1 ){
            res += curr + to_string(count);
            curr = input[i];
            count =1;
        }else{
            res += curr ;
            curr = input[i];
            count =1;
        }
    }
    if(count==1)
    {
        res += curr;
    }
    else
    {
        res += curr + to_string(count);
    }
    
    if(res.empty() || res.length()>=input.length()){
        return input;
    }
    
    return res;
    
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}