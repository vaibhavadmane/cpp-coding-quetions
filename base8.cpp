// remove dublicate from shorted array 
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int> v={1,2,2,2,3,3,3,8,9,10,11,12};
    int i=0;
    int j=1;
    while(i<v.size() && j<v.size()){
       if(v[i]!=v[j]){
        swap(v[j],v[i+1]);
        i++;
        j++;
       }
       else{
        j++;
       }
    }
    i++;
    while(i<v.size()){ // you can make changes here 
        v[i]=0;
        i++;
    }
    for(int i:v){
      cout<<i;
    }
}