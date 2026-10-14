#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,2,4,2,6,2};
    unordered_map<int,int>m;
    for(int i:v){
        m[i]++;
        if(m[i]>v.size()/2){
            cout<<i;
            return 0;
        }
    }

}