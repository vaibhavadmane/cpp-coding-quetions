// kadane's algorithm 
 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    
    vector<int> v={-1,-3,-5,-6};
    int globle_sum=v[0];
    int sum=v[0];
    for(int i:v){
     
      sum=max(i,sum+i);
     globle_sum=max(sum,globle_sum);
    }
    cout<<globle_sum;
 } 