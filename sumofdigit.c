#include<stdio.h>
int main()
{
    int n,temp,r,sum;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
   printf("The summation is=%d",sum);
}

