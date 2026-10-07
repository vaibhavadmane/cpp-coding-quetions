// rotate an array by k  
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int i=0;
int k=4;
int j=k-1;
while(i<(v.size()-1)){
// swap(v[i],v[j]);
int l=i;
int n=j;
while(l<n){
    swap(v[l],v[n]);
    l++;
    n--;
}
i=i+k;
if((j+k)>=v.size()){
    j=v.size()-1;
}
else{
    j=j+k;
}
}

 for(int i:v){
        cout<<i;
    }
    return 0;
}