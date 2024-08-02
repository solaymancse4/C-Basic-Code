#include<stdio.h>
int main()
{
    int n,temp,r,sum;
    printf("Enter the number for Armstrong:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        printf("%d is Armstrong",temp);
    }
    else{
       printf("%d is not Armstrong",temp);
    }
}
