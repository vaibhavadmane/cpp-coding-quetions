//frequency count
#include<bits/stdc++.h>
using  namespace std;
int main(){
    map<char,int>m;
    string str="aayu dahake";
    for(auto i:str){
       m[i]++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}