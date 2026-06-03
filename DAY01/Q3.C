#include<stdio.h>

int main(){
    int n,factorial =1;

printf("enter n: ");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    factorial = factorial*i;
}
printf("factorial is %d",factorial);
return 0;
}
