#include <stdio.h>
int main(){
  int n1=0,n2=1,next,n,i;
  printf("Enter the number for fibo:");
  scanf("%d", &n);
  printf("The fibo series is:");
  for(i=1;i<=n;++i){
      printf("%d ",n1);
      next=n1+n2;
      n1=n2;
      n2=next;
  }

    return 0;
}
