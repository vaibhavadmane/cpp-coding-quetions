// move zeroes to end 
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int> v={1,2,0,0,0,0,3,0,0,8,9,0,0,12};
    int i=0;
    int j=1;
    while(i<v.size() && j<v.size()){
       if(v[j]!=0){
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