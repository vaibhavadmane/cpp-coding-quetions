// rotate an array by one 
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10,11,12};
int i=0;

int j=i+1;

while(i<v.size()-1){
    swap(v[i],v[j]);
    i=i+2;
    j=j+2;
}

 for(int i:v){
        cout<<i;
    }
    return 0;
}