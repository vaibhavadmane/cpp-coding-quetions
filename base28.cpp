#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<string>v={"flower","flex","float"};
    
    
 string ans="";
for(int i=0;i<v[0].size();i++){

  for(int j=0;j<v.size();j++){
     if((v[0][i]!=v[j][i])){
        cout<<ans;
        return 0;
     }
  }
  ans=ans+v[0][i];
}

return 0;
}

