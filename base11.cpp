// binsry search 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,0};
    int target=8;
    int s=0;
    int end=v.size()-1;
    while(s<end){
        int mid=(s+end)/2;
        if(target==v[mid]){
            cout<<"value is present in this index"<<mid;
            return 0;
        }
        else if(target<v[mid]){
           end=mid-1;
        }
        else{
         s=mid+1;
        }

    }
    return 0;
}