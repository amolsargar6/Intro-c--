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

void reverse(char input[])
{
    int n = length(input);
    //reverse the entire array
    
    int i=0;
    int j=n-1;
    while(i<j)
    {
       char temp = input[i];
       input[i] = input[j];
       input[j] = temp;
       i++;
       j--;
    }
}

void reverseStringWordWise(char input[])
{
    reverse(input);
    //reverse each word
    
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
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}