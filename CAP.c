#include<stdio.h>
#define CAP 50
void xyz(int a[],int n);
void xyz(int a[CAP],int n){
    for(int i=0;i < n && i < CAP;i++){
        a[i]=i;
       printf("%d",a[i]);
  }
}
int main()
{
    int a[CAP ],n=130;
    xyz(a,n);
}
