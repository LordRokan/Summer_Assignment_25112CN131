//program to Find product of digits. 

#include<stdio.h>

void main(){
    int n,product=1, rem;

    printf("enter a num: ");

    scanf("%d",&n);

    while (n>0)
    {
        rem = n%10;
product = product*rem;
n=n/10;
    }
    printf("product is : %d", product);
    
}