/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,p;
   cin>>s>>p;
   
   int count=0;
   
   int flag=0;
   while(s.length()!=0 &&  s.find(p)<s.length() ){
         s.erase(s.find(p),p.length());
            count++;
            flag=1;
           
                  
   }
   
 if(flag){
     cout<<count;
 }
 else{
     cout<<0<<endl;
 }
   
   

    return 0;
}
