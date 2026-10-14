#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str="((()))";
    stack<char> s;
    for(int i:str){
      if(i=='('){
        s.push('(');
      }
      else if(i==')' && !s.empty()){
        s.pop();
      }
      else{
        cout<<"it is not a valid paranthisis";
        return 0;
      }
    }
    cout<<"it is a valid paranthisis";
    return 0;
}