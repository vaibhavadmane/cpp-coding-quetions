// reverse string 
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="chhagan";
    int j=str.size()-1;
    for (int  i = 0; i < str.size()/2; i++)
    {
        swap(str[i],str[j]);
        j--;
    }
    cout<<str;
}