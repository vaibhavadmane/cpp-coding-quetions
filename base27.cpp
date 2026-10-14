#include<bits/stdc++.h>
using namespace std;

int main(){
   string str="my name is vaibhav ";
   for (int i = 0; i < str.size(); i++)
   {
   
    if(str[i]==' ' &&str[i+1]!=' '){
         i++;
        if(str[i]<=122 && str[i]>=97){
            str[i]=str[i]-32;
        }
    }
   }
   cout<<str;
}