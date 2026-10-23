//counting sort 
#include<bits/stdc++.h>
using namespace std;

int maxium(vector<int>v){
    int maxi=INT_MIN;
    for(int i:v){
        maxi=max(i,maxi);
    }
    return maxi;
}


int main(){
    vector<int>v={1,2,3,4,1,2,3,4,2,1,3};
    
     int mx=maxium(v)+1;
     int arr[mx]={0};
     for(int i:v){
        arr[i]++;
     }
     for(int i=1;i<mx;i++){
        arr[i]=arr[i]+arr[i-1];
     }
     int ans[arr[mx-1]]={0};
     for (int i = 0; i < v.size(); i++)
     {
        ans[--arr[v[i]]]=v[i];
     }
     for(int i:ans){
        cout<<i;
     }
     
}