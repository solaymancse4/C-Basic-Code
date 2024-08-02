#include<stdio.h>
int main()
{
    int n,temp,r,sum;
    printf("Enter the number for check palindrome:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        printf("%d is Palindrome",temp);
    }
    else{
       printf("%d is not Palindrome",temp);
    }
}
