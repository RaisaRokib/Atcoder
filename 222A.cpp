#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 if(s.size()==4){
    cout<<s<<endl;
 }else {
   int n=4-s.size();
   for(int i=0;i<n;i++)
   {
       s='0'+s;
   }
 cout<<s<<endl;
 }
}

