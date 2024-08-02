#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("Enter the Number for factorial:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The Factorial is:%d",fact);
}
