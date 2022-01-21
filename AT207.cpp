#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,s,s1,s2,s4;
    cin>>a>>b>>c;
/*if(a+b==b+c){
    cout<<a+b<<endl;

}
*/

  if(a+b>=b+c &&  a+b>=a+c ){
        cout<<a+b<<endl;

  }
   else if(b+c>=a+b &&  b+c>=a+c ){
        cout<<b+c<<endl;

  }

  else if(a+c>=a+b &&  a+c>=b+c ){
        cout<<a+c<<endl;

  }


}


