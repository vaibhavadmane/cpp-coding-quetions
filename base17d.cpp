// ladder in array  
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,4,3,4,5,6,7,8,3,4,2,5,7,8};
    int ans=0;
    int rs=0;
    int i=0;
    int j=1;
   while(j<v.size()){
     if(v[i]+1==v[j]){
        ans++;
     }
     else{
        if(rs<ans){
        rs=ans;
        }
        ans=0;
     }
     j++;
        i++;
   }
   cout<<rs+1;
    return 0;
}