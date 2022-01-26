#include<iostream>
using namespace std;
#include <cstring>
void reverseEachWord(char input[]) {
   int i = 0 , start, end;
    while(input[i] != '\0'){
        
             start = i;
        while(input[i] != ' ' && input[i] != '\0'){
            i++;
        }
            
        end = i-1;  
            while(start < end){
               // swap(input[start] , input[end] );
                int tmp = input[start];
                input[start] = input[end];
                input[end] = tmp;
                start++; 
                end--;
            }
        i++;
             
        }
    
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}