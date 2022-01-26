#include<iostream>
using namespace std;
int length(char a[])
{
    int n = 0;
    for(int i=0 ; a[i] != '\0' ; i++)
    {
        n++;
    }
    return n;
}


void trimSpaces(char input[])
{
    int n = length(input);
    for(int i=0 ; i<n ; i++)
    {
        if(input[i] == ' ')
        {
            n--;
            int k = i;
            int j = i+1;
            while(input[j]!=0)
            {
                
                input[k] = input[j];
                k++;
                j++;
            }
            
            input[j-1] = '\0';
        }
        
    }
}

int main()
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

