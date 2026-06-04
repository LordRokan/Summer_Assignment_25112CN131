//a program to Check whether a number is palindrome.

#include<stdio.h>

void main(){

int n, rev=0, rem;

printf("enter a num: ");

scanf("%d",&n);
int num;
num=n;

while (n>0)
{
    rem = n% 10;
rev = rev*10 + rem;
n=n/10;
}

if (rev == num)
{
    printf("%d is pallindrome",num);
}else{
    printf("not a pallindrome number");
}


}