//linear search
//it is basic so we learn iterators and std::find 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main(){
    vector<int> v={1,2,0,0,0,0,3,0,0,8,9,0,0,12};
    int target=9;
    auto it=find(v.begin(),v.end(),target);
    if(it != v.end()){
cout<<"found";
return 0;
    }
    else {
        cout<<"not found";
    }
return 0;
}