// longest sub string without repeating charecter
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string str="cdffab";
    set<char>s;
    vector<string>v;
    int mx=0;
    string temp="";
 for(auto i:str){
     auto it=s.find(i);
     if(s.end()==it){
        s.insert(i);
        temp=temp+i;
     }
     else{
        int val=s.size();
        if(val>mx){
         v.clear();
          v.push_back(temp);
          
        }
       if(val==mx){
            v.push_back(temp);
        }
        temp="";
        mx=max(mx,val);
        s.clear();
        s.insert(i);
        temp=temp+i;
     }
 }
 int val=s.size();
  if(val>mx){
         v.clear();
          v.push_back(temp);
          
        }
       if(val==mx){
            v.push_back(temp);
        }
     
  mx=max(mx,val);
 cout<<mx;




 for(auto i:v){
    cout<<i<<endl;
 }
    return 0;
} 