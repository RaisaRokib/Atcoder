
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll n1=n-1;
    map<ll,ll>mp;
    while(n1--){

        ll x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y]++;

    }
    ll c=0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){

        if(itr->second==n-1){
            c++;
            break;
        }

    }
    if(c==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
