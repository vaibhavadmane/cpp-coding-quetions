// color sort -sort three color, move zeros segregate ,positive and neggetive,,sort by parity even odd
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,1,2,0,1,2,1,0,0,0,1,0,2};
    int i=0;
    int j=v.size()-1;
   
    while(i<=j){
 if(v[i]==0){
    swap(v[j],v[i]);
    j--;
 }
 else{
    i++;
 }
    }
    for(int i:v){
      cout<<i;
    }
    return 0;
}