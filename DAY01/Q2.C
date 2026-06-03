#include<stdio.h>

int main(){
    int n,table;
    printf("enter number: ");
    scanf("%d",&n);
printf("table of %d is : \n",n);
    for(int i =1; i<11; i++){
table = n*i;
printf("%d",table);
printf("\n");
    }
    return 0;
}