// check shorted array 
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int> v={1,2,3,5,4,6};
    int i=0;
    int j=i+1;
    if(v[i]>v[j]){
         while(i<v.size()){
         if(v[i]<v[j]){
            cout<<"flase";
           return 0;
         }
         i++;
         j++;
    }
    }
   else{
     while(i<v.size()){
         if(v[j]<v[i]){
            cout<<"false";
           return 0;
         }
         i++;
         j++;
    }
   }
   cout<<"true";
   return 0;
}