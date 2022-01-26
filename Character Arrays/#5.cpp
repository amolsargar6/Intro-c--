#include<iostream>
#include<cstring>
using namespace std;
void substrings(char input[])
{
    int k = 0;
    while(input[k] != '\0')
    {
        for(int i=k; input[i]!='\0'; i++)
        {
            for(int j=k ; j<=i ; j++)
            {
                cout<<input[j];
            }
            cout<<endl;
            
        }
        k++;
    }
}

int main()
{
    char input[1000];
    cin>>input;
    substrings(input);
}