#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X;

    cin>>N>>X;
    string s;
     cin>>s;


    for(int i=0; i<s.size(); i++)
    {


        if(s.at(i)=='x' && X>0)
        {
            X=X-1;
        }
        if(s.at(i)=='o')
        {
            X=X+1;
        }



    }
cout<<X<<endl;


}
