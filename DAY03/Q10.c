#include<stdio.h>

void main(){

printf("enter the last numberr of range: ");

int n,temp=0;

scanf("%d",&n);

for (int i = 2; i < n; i++)
{
    for (int j = 2; j < i; j++)
    {
        if (i%j==0)
        {
            temp=1;
            break;

        }else{
            temp=0;
        }
        
    }
    if (temp==0)
    {
        printf("%d \n",i);
    }
    
}




}