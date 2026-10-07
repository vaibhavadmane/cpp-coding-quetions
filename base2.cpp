//  find smallest element
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main(){
    int arr[5];
   vector<int> numbers={1,2,3,4,5,6};
   int minn=INT8_MAX;
for(int i:numbers){
minn=min(minn,i);
}
cout<<minn;
}