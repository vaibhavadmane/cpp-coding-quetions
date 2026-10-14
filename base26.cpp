 //toggle words
 #include<bits/stdc++.h>
 using namespace std;

 int main(){
  string str="My Name is Khan @123";


// for (int i=0;i<str.size();i++)
// {
// str[i]=islower(str[i])?toupper(str[i]):tolower(str[i]);
 
// }




  for(int i=0;i<str.size();i++){
    
     if(97<=str[i] && str[i]<=122){
        
        str[i]=str[i]-32;
        
     }
    else if(65<=str[i] && str[i]<=90){

       str[i]=str[i]+32;
        
     }
     
  }
  cout<<str;

   return 0;
 }