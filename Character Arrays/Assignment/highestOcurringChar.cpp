#include<iostream>
using namespace std;
#include <climits>
#include <cstring>
char highestOccurringChar(char input[]) {
    // Write your code here
   
    
    int count[256] = {0};
 
    // Construct character count array from the input
    // string.
    int len = strlen(input);
    int max = 0;  // Initialize max count
    char result ;   // Initialize result
 
    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++) {
        count[input[i]]++;
       
    }
    for(int i = 0 ; i < 256 ;i++){
     if (count[input[i]] > max) {
            max = count[input[i]];
            result = input[i];
        }
    }
    return result;
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}