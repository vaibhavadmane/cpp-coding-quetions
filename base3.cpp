// second largest element 
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main(){
    vector<int> number={5,5,2,4};
    int max1=INT8_MIN;
    int max2=INT8_MIN;
    
    for(int i:number){
    //     if(i>max1){
    //   max2=max1;
    //   max1=i;
    //     }
        max1=max(i,max1);
       if(i!=max1) max2=max(i,max2);
       
    //     else if(i>max2 && i!=max1){
    //     max2=i;
    //   }

    }
    cout<<max2;
}