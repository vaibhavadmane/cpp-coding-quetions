//count sort -find most frequent element ,find all duplicate ellement, relative sort array,sort array by incressing freq,top k freq. element 
#include<bits/stdc++.h>
using namespace std;

int maxium(vector<int>v){
int mx=INT_MIN;
for(int i:v){
mx=max(mx,i);
}
return mx;
}

int main(){
    vector<int>v={1,2,3,4,5,6,7,5,3,2,3,4,2,1,4,5,6};
    int mx=maxium(v)+1;
    int arr[mx]={0};
 
    for(int i:v){
        arr[i]++;
    }
       for(int i=0;i<mx;i++){
       if(arr[i]>1){
         cout<<i;
       }
    }
    return 0;
}