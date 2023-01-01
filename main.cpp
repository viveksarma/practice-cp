/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
..........................................................

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

//1. Print the binary repesentation of numbers in a range not having the adjacent dt bis:-  

//   int to_binary(int n){
       
//       int pos=1;
//       int y=0;
//       while(n>0){
//       int rem = n%2;
//         y += rem*pos;
//         pos*=10;
        
//         n/=2;
//   }


//     return y;
    
//   }

// bool adjacentSet(int n)
// {
// 	return (n & (n >> 1));
// }


// int main()
// {
    
//     int a,b;
//     cin>>a>>b;
   
    
//     for(int i=a+1;i<b;i++){
        
//       if(!adjacentSet(i)){
//              cout<<(to_binary(i))<<endl;
//          }
        
//     }
    
   
     
      
//     return 0;
// }

//******************************************************************************

//2.Given a string convert it into the binary to decimal representation:- 

//   int to_decimal(int n){
       
//   int pos=1;
//   int y=0;
//   while(n>0){
//       int rem = n%10;
//         y += rem*pos;
//         pos*=2;
        
//       n/=10;
//   }


//     return y;
//   } 
   
   
// int main(){
    
// string s ,str;
// cin>>s;

// for(int i=0;i<s.length();i++){
    
//     if(s[i]=='a' || s[i]=='e' || s[i]=='i'  || s[i]=='o'  || s[i]=='u' ){
        
//         str+='0';
//     }
//     else{
//         str+='1';
//     }
// }

//   int num=0;
//  for(int i=0;i<str.length();i++){   //  this is the function by which we can convert the any integer in a string into an integer. ///
//      num= num*10+(str[i]-'0');
     
//  }
 
//  cout<<to_decimal(num);       ///  cout<<to_decimal(stoi(str)); ///
 
 
// return 0;


// }

//*******************************************************************************

//3. A nunmber having the naximum frequency:- //

// int main(){
    
//     int n;
//     cin>>n;
    
//     vector<int>v(n);
//      unordered_map<int,int>mp;
    
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
       
//     }
    
//      for(int i=0;i<v.size();i++){
        
//         mp[v[i]]++;
//     }
   
    
//     int maxi=INT_MIN;
    
    
//     for(auto x: mp){
//         if(x.second>maxi){
//             maxi=x.second;
//         }
//     }



//     cout<<maxi;


// return 0;

// }

//******************************************************************************

//4. Matrix Submission through given charecter Matrix :- 

// int main(){
    
//     int r,c;
//     cin>>r>>c;
    
//     int A[r][c];
//     int B[r][c];
//     char C[r][c];
    
//     for(int i=0;i<r;i++){
        
//         for(int j=0;j<c;j++){
            
//             cin>>A[i][j];
//             cin>>B[i][j];
//             cin>>C[i][j];
//         }
        
//     }
    
    
//     for(int i=0;i<r;i++){
        
//         for(int j=0;j<c;j++){
            
            
//             if(C[i][j]=='+'){
//                 cout<<A[i][j]+B[i][j];
//             }
            
            
//             else if(C[i][j]=='-'){
//                 cout<<A[i][j]-B[i][j];
                
//             }
            
            
//             else if( C[i][j]=='*'){
//                 cout<<A[i][j]*B[i][j];
                
//             }
            
//             else{
//                 cout<<A[i][j]/B[i][j];
//             }
            
            
//         }
        
//     }
    
    
    
//******************************************************************************

//5.print 1 if all the charecter of english alphbet is present in that string else 0:- 

// int main(){

//     unordered_set<char>s;
    
//     string str;
//     getline(cin,str);
    
//     transform(str.begin(),str.end(),str.begin(),::tolower);      // conert string in to the lower case
    
//     str.erase(remove(str.begin(), str.end(), ' '), str.end());   // remove the white spaces from string //
    
//     for(int i=0;i<str.length();i++){
//         s.insert(str[i]);
//     }
    
    
//     if(s.size()==26){
//         cout<<1<<endl;
//     }
    
//     else{
        
//         cout<<0<<endl;
//     }
    
//******************************************************************************

//6. find  the value of x and y on the basis of prime frequency of charecters in a sting:-  

   
//   bool is_prime(int n){
       
//       if(n<=1){
//           return false;
//       }
       
//       for(int i=2;i*i<=n;i++){
           
//           if(n%i==0){
//               return false;
//           }
//       }
       
//       return true;
//   }



//   int main(){
      
      
//     int x=0,y=1;
    
//     string s;
//     cin>>s;
    
//     map<char,int>m;
    
//     for(int i=0;i<s.length();i++){
//         m[s[i]]++;
        
//     }
    
//       for(auto it :m){
          
//           if(is_prime(it.second)){
              
//               x+=it.second;
//               y*=it.second;
              
//           }
         
              
          
          
          
//       }
      
//     cout<<x<<" "<<y<<endl;
   
//******************************************************************************

//7.encrypt the given number to hide the privacy:-
    
// int main(){
        
//      long long int n;
//      cin>>n;
     
//      string str= to_string(n);
     
     
//      string s1;
//      string s2;
     

//      s1+=str[0];
//      for(int i=1;i<str.length();i++){
         
//         if(i%2==0){
           
//           s1+=str[i]; 
            
//         } 
      
//      }
        
        
//     for(int i=0;i<str.length();i++){     
        
//         if(i%2!=0){
//             s2+=str[i];
//         }
    
    
    
//     }
    
    
//     cout<<s1+s2<<endl;

//******************************************************************************

//8. find the mth palindrom number in a range:-
    


int is_palindrom(string str){
       
    int len = str.length();
        
     for (int i = 0; i < len / 2; i++) {
         
       if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
       
 }


int main()
{
    int n,m;
    cin>>n>>m;
    
    string s;
    
    vector<string>ans;
    vector<string>res;
    
    for(int i=n+1;i<=1000;i++){
        
        string s=to_string(i);
        
         ans.push_back(s);
    }
         
         
        
        
    for(int i=0;i<ans.size();i++){
          
          if(is_palindrom(ans[i])){
              res.push_back(ans[i]);
          }
          
        }
    
    
    for(int i=0;i<res.size();i++){
        
        cout<<res[m-1];
        break;
        
    }









    return 0;
    
}




































































































