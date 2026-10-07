// count even and odd 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,0};
    int i=0;
    int j=0;
    while(j<v.size()){
        if ((v[j]%2)==0)
        {
            swap(v[i],v[j]);
            j++;
            i++;
        }
        else{
            j++;
        }
    }
    for(int i:v){
        cout<<i;
    }
return 0;
}
//odd or even tum count kar lena ek pointer laga ke even value count karna or size of array me se minus kar dena 