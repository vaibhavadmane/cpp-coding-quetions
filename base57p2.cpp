// sort by increasing frequency 
#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>v={1,2,3,4,5,6,7,5,3,2,3,4,2,1,4,5,6};

    unordered_map<int,int>m;
 
    for(int i:v){
        m[i]++;
    }
   
  
   sort(v.begin(),v.end(),[&m](int a,int b){
      if(m[a]==m[b]){
        return  a>b;
      }
      return m[a]<m[b];
   });
    
    for(int i:v){
      cout<<i<<" ";
    }
    return 0;
}