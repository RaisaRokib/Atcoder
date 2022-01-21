#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

   set<char>se;
   string s;
   cin>>s;
   ll si=s.size();
   for(ll i=0;i<si;i++){
        se.insert(s[i]);
   }
    if(se.size()==1){
        cout<<"1"<<endl;
    }
    else if(se.size()==2){
        cout<<"3"<<endl;
    }
    else{
        cout<<"6"<<endl;
    }

}
