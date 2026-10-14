#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=62;
    
    if(n==1){
        cout<<"true";
        return 0;
    }
    int pwr=2;
    while(pwr<=n){
         if(pwr==n){
        cout<<"true";
        return 0;
    }
         pwr=pwr*2;
    }
   cout<<"false";
}