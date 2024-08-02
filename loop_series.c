#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("Enter the number for summation of series ");
    for(i=2;i<=n;i++){
        sum=sum +(i*i)*((i+1)*(i+1));
    }
    printf("The Summation is: %d",sum);
}
