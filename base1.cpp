// find largest element 
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main(){
    int arr[5];
   vector<int> numbers={1,2,3,4,5,6};
   int maxn=INT8_MIN;
for(int i:numbers){
maxn=max(maxn,i);
}
cout<<maxn;
}