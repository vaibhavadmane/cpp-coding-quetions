//first non repeating charecter
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="aabbfccdde";
    unordered_map<char,int>m;
    for(auto i: str){
        m[i]++;
    }
    for (auto i :str)
    {
        if(m[i]==1){
            cout<<i;
            return 0;
        }
    }
    
}