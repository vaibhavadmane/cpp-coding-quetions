//count vowel
#include<iostream>
using namespace std;

int main(){
    string str="anameium";
    string check="aeiouAEIOU";
    int vowel=0;
    for(int i:str){
       for(int j:check){
           if(i==j){
            vowel++;
           }
       }
    }
    cout<<vowel;
    return 0;
}