#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,7,9,3,6};
    int target=9;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]=i;
    }
 for(auto i:v){
    int temp=max(target-i,i-target);
   auto it= m.find(temp);
   if(it!=m.end()){
      cout<<m[temp]<<" "<<m[i]<<endl;
      return 0;
   }
 }
  

    return 0;

}