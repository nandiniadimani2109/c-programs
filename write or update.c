//write/update
#include<stdio.h>
int main(){
    int arr[]={7,6,5,9,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int index=4;
    int newval=78;
    if(index>=0 && index<n){
        arr[index]=newval;
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
    }
    else
    {
        printf("invalid");
    }
}
