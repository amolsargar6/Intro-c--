#include<iostream>
#include<cstring>
using namespace std;
void printPrefixes(char input[])
{
   
    for(int i=0 ; input[i]!='\0'; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
}

int main()
{
    char input[1000];
    cin>>input;
    printPrefixes(input);
}