// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table

#include<iostream>
using namespace std;
int main(){
    float n1 ,n2, w;
    cin>>n1>>n2>>w;
    for(int i=n1 ; i<=n2 ; i=i+w){
        int c = (i-32)*(5.0/9);
        cout<<i<<" "<<c<<endl;
    }
    return 0;
}