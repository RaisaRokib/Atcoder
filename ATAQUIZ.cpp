#include<bits/stdc++.h>
using namespace std;
int main(){


    int x;
    cin>>x;
    if(x>=0 && x<40){
        x=40-x;
        cout<<x<<endl;
    }
     else if(x>=40 && x<70){
        x=70-x;
        cout<<x<<endl;
    }
    else if(x>=70 && x<90){
        x=90-x;
        cout<<x<<endl;
    }

    else if(x>=90 ){

        cout<<"expert"<<endl;
    }
}
