// reverse array 
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int> v={1,2,3,5,4,6};
    int i=0;
    int j=v.size()-1;
    while(i<j){
       swap(v[i],v[j]);
       i++;
       j--;
    }
    for(int i:v){
        cout<<i;
    }
    return 0;
}