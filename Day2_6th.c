/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(j=4-i;j>=1;j--)
        {
            printf(" ");
        }
        for(k=i;k<=2*i-1;k++)
        {
           printf("%d",k);
        }
        for(l=2*i-2;l>=i;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}    