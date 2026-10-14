#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int sum=0;
   while (n>=1)
   {
      int temp=n%10;
      n=n/10;
      sum=sum+temp*temp;
   }
   return sum;
}

int main(){
    unordered_set<int>s;
    int n;
    
    cin>>n;
  int sn=sum(n);
    while(sn!=1){
         auto it=s.find(sn);
         if(it!=s.end()){
            cout<<"not happy";
            return 0;
         }
            s.insert(sn);
         n=sn;
          cout<<sn<<endl;
         sn=sum(n);
        
    }
    cout<<"happy happy happy";

}