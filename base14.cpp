// missing value in distinct array 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main(){
    vector<int> v={1,2,3,4,6,7,8,9};
    int min=INT8_MAX;
    int ans=0;
    for(int i:v){
        if(i<min){
            min=i;
        }
    }
   for(int i:v){
    ans=ans^i;
   }
   
   for (int i = min; i <(min+v.size()+1) ; i++){
    ans=ans^i;
   }
   cout<<ans;
   

return 0;
}