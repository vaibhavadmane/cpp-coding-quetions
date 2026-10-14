#include<bits/stdc++.h>
using namespace std;
int main(){
string str="aabbccddaa";
string ans="";

int i=0;
int j=1;
while(i<str.size() ){
  if(str[i]==str[j]){
    j++;
  }
  else{
    ans=ans+str[i]+ to_string(j-i);
    i=j;
    j++;
  }
}
cout<<ans;
}