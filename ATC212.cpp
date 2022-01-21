#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b;
cin>>a>>b;

if(0<a && b==0){
    cout<<"Gold"<<endl;
}
if(0==a && 0<b){
    cout<<"Silver"<<endl;
}

if(0<a && 0<b){
    cout<<"Alloy"<<endl;
}
}
