#include<stdio.h>
int main(){
    int a[100];
    int i,j,n,lar,smal;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
for(i=0;i<n;i++)
{  printf("Enter the value of elements %d: ",i+1);
    scanf("%d",&a[i]); }
lar=a[0];
smal=a[0];
for(i=0;i<n;i++)
{ if(a[i]<smal)
{ smal=a[i];   }  }
printf("smallest element  is %d",smal);
return 0;}