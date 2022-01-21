#include<bits/stdc++.h>
using namespace std;
int main(){

 string s;
 cin>>s;

 int n=s.size();
 for(int i=0,j=n-1; i<n/2;i++,j--){

    swap(s[i],s[j]);
 }

 cout<<s<<endl;









}

