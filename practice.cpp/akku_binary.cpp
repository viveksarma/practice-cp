#include <bits/stdc++.h>
using namespace std;



int main(){

     int a,b;
     cin>>a>>b;

      int count=0;
     for(int i=a;i<=b;i++){
      
     
      int bit_count =__builtin_popcount(i);

      if(bit_count==3){

              count++;                  
      }


     }

 cout<<count;

return 0;

}