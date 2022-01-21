#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    string arr1[]={ "ABC", "ARC", "AGC","AHC"};
    string arr2[3];

    cin>>arr2[0];
    cin>>arr2[1];
    cin>>arr2[2];

    for(ll i=0;i<4;i++){
            int c=0;

        for(ll j=0;j<3;j++){

           if(arr1[i]==arr2[j]){
              c++;
              break;
              }

                }
            }

            if(int c==0){

                    cout<<arr1[i]<<endl;
            }



        }


