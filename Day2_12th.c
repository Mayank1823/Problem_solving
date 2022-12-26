/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int i,j,k,l,m,n;
    for(i=1;i<=6;i++)
    {
        for(j=6;j>=1;j--)
        {
            printf("%d",j);
        }
        for(k=2;k<=i;k++)
        {
            printf(" ");
        }
        for(m=6-i;m>=1;m--)
        {
            printf("%d",m);
        }
        for(n=2;n<=i;n++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
