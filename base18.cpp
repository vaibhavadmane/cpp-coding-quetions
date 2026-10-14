// frequency count 
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v={5,6,1,4,1,3,2,5};
map<int,int> m;
 for(int i:v){
    m[i]++;
 }
 for(auto i: m ){
     cout<<i.first<<"  "<<i.second<<endl;
 }
}