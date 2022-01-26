#include<iostream>
using namespace std;
#include<climits>
#include<cstring>
void minLengthWord(char input[], char output[]){
		
	// Write your code here	
    int minstart = -1, minlen = INT_MAX, currstart =0,currstartwordlen;
    int len = strlen(input);
    int i=0;
    for(;i<len;i++){
        if(input[i]== ' '){
            currstartwordlen  = i - currstart;
            if(currstartwordlen < minlen){
                minstart = currstart;
                minlen = currstartwordlen;
            }
            currstart = i+1;
        }
    }
    
    
    if(minstart == -1){
        for(int i = 0 ; i<=len ;i++){
            output[i] = input[i];
        }
    }else{
        currstartwordlen = i- currstart;
        if(currstartwordlen < minlen){
            minstart = currstart;
            minlen = currstartwordlen;
        }
        int j=0;
        for(int i = minstart ; i< minstart+minlen ;i++){
            output[j++] = input[i];
        }
        output[j]='\0';
    }
    

}
int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}