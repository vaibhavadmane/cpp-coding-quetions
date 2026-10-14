#include<bits/stdc++.h>
using namespace std;
int main(){
 string str="helo my best friend you have ...";
 str.erase(remove(str.begin(),str.end(),' '),str.end());  
 cout<<str;
}
