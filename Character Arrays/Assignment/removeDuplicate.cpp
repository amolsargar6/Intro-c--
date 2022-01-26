#include <iostream>
#include <cstring>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int i=0, j=0;
    input[j] = input[0];
    while(input[i]!='\0')
    {
        if(input[i]!=input[j])
        {
            input[j+1] = input[i];
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    input[j+1] = '\0';
    
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}