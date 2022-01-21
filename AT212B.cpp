#include<bits/stdc++.h>
using namespace std;
int main(){


    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d && d==a){
        cout<<"Weak"<<endl;

    }




    else if(a==9 && b==0){
        cout<<"Weak"<<endl;
    }

    else if(b==9 && c==0){
        cout<<"Weak"<<endl;
    }

    else if(c==9 && b==0){
        cout<<"Weak"<<endl;
    }


    else if(a==b || a>b || ){
        cout<<"Strong"<<endl;
    }
     else if(b<=c){
        cout<<"Strong"<<endl;
    }

 else if(c<=d){
        cout<<"Strong"<<endl;
    }

}


