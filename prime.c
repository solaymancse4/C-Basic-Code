#include<stdio.h>
int main()
{
int a[10],i;
a[0]=1;
a[1]=1;
for(i=2;i<=9;i++){
a[i]=a[i-2]+a[i-1];
}
for(i=0;i<=9;i++){
printf("%d ",a[i]);
}

}
