#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="i am a robot";
    int s=0;
    int e=0;
    
    for(int i=0;i<str.size();i++){
        if(str[i+1]==' ' | (str[i]==str[str.size()-1])){
            e=i;
            while (s<e)
            {
                swap(str[s],str[e]);
                e--;
                s++;
            }
            s=i+2;
        } 
    }
    cout<<str;
}