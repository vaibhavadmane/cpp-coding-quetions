//anagram string check
#include<bits/stdc++.h>
using namespace std;
int main(){
     string str1="chaman";
     string str2="macanj";
     map<char,int>m;
     int s1=str1.size();
     int s2=str2.size();
     if (s1!=s2){
        cout<<"it is not anagram";
        return 0;
     }
     for(int i:str1){
        m[i]++;
     }
     for(int i: str2){
     if( m.find(i)!=m.end()){
        m[i]--;
     }
    else{ 
        cout<<"not a anagram ";
        return 0;
        }
     }
     cout<<"congratulation";
    return 0;

}