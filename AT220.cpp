#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
cin>>a>>b>>c;
int s=0;
int c1=0;
for(int i=a;i<=b;i++){

  if(i%c==0){

  c1++;
  s=i;
  break;
}
}
if(c1==0){
    cout<<"-1"<<endl;
} else {
    cout<<s<<endl;
    }



}



