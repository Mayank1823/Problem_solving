/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,j,k,l,m;
    
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            for(k=4;k>=i;k--)
            {
                printf(" ");
            }
            for(l=4;l>=i;l--)
            {
                printf(" ");
            }
            for(m=i;m>=1;m--)
            {
                printf("%d",m);
            }
            printf("\n");
        }
    
}