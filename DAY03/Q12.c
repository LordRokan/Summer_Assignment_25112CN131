#include<stdio.h>

void main(){ 
    int a,b,n,m,gcd,lcm;

    printf("enter two num:  ");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        n=a;
        m=b;
    }else{
        n=b;
        m=a;
    }
    
    for ( int i = m; i > 0; i--)
    {
        if (n%i==0 && m%i ==0)
        {
            gcd = i;
            
            break;
        }
        else{
            continue;
        }
    }

    lcm = a*b/gcd;
    
printf("LCM : %d",lcm);




}