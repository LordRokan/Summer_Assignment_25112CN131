#include<stdio.h>

void main(){

int n,tem=0;

printf("enter a number: ");

scanf("%d",&n);

for (int i = 2; i < n; i++)
{
    if (n%i==0)
    {
        tem=1;
        break;
    }else{
        tem = 0;
    };


    
}
if (tem==0){
    printf("num is prime");
}else{
    printf("not a prime num");
}



}