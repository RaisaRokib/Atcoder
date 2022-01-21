#include<stdio.h>
int main(){
int arr[]={100,90,80,70,60,50,40,30,20,10};
int i,j,t;
for(i=0,j=9;i<10;i++,j--){
    t=arr[j];
    arr[j]=arr[i];
    arr[i]=t;
}
for(i=0 ;i<10;i++){
    printf("%d\n",arr[i]);
}


}
