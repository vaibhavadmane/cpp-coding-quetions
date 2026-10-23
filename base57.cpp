#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,1,2,2,2,2,0,0,0,1};
    int i=0;
    int k=0;
    int n=v.size();
    int j=n-1;
   while(k<=j){
    if(v[k]==0){
        swap(v[i],v[k]);
        i++;
        k++;
    }
   else if(v[k]==2){
        swap(v[j],v[k]);
        j--;
    }
   else {
    k++;
};
   }
   for(int i:v){
    cout<<i;
   }
}