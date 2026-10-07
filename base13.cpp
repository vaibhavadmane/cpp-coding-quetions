// max diffrence btw element of array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main(){
    vector<int> v={1,2,0,0,0,0,3,0,0,8,9,0,0,12};
    int max=INT8_MIN;
    int min=INT8_MAX;
    for(int i:v){
        if(i>max){
            max=i;
        }
        if(i<min){
            min=i;
        }
    }
    cout<<"max diff is "<<max-min;

return 0;
}