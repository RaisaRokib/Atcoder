#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,sum=0;
    cin>>n;


    for(int i=1;i<=n;i++){
          int arr[i];
            cin>>arr[i];

        if(arr[i]>10){
                arr[i]=arr[i]-10;
           sum=sum+arr[i];

        }
    }
    cout<<sum<<endl;
}

