#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin>>x;
    if(x<=41){
        string s="AGC";
        string s1="";
        string s2=to_string(x);
        if(x<=9){
            s=s+"00"+s2;
        }
        else{
            s=s+"0"+s2;
        }
        cout<<s<<endl;
    }
    else{
        x=x+1;

        string s="AGC";
        string s1="";
        string s2=to_string(x);
        s=s+"0"+s2;
        cout<<s<<endl;

    }


}
