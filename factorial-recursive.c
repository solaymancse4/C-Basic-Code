#include<stdio.h>
int main()
{
 int result,n;
 scanf("%d",n);
 result=fact(n);

printf("The factorial is =%d",result);

}
int fact(int n){

   if(n==0){
    return 1;
   }
   else{
    return (n*fact(n-1));
   }
}
