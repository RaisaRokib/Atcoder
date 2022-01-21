#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a,y,x;
   cin>>n;
   string s;
   cin>>s;

  int res;

   for(int i=0;i<n;i++){
    if(s[i]=='1'){
        res=i;
        break;
    }
   }
   if(res%2==0){
    cout<<"Takahashi"<<endl;
   }
   else{
    cout<<"Aoki"<<endl;
   }



}
