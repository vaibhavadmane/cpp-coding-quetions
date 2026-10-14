#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7};
    unordered_map<int,int>m;
    for(int i:v){
        m[i]++;
        if(m[i]>1){
            cout<<"dublicate";
            return 0;
        }
    }
    cout<<"all are unique";
}