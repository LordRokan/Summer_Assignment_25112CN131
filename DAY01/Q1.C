#include<stdio.h>

int main(){

    int n,sum=0;
printf("enter number upto which sum is to be calculated :  ");
scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        sum +=i;
    }
    printf("sum = %d",sum);

    return 0;
    






}