/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,j,k,l,n;
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=4-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
       {
        printf("%d",j);
       }
       for(l=2;l<=i;l++)
       {
           printf("%d",l);
       }
       printf("\n");
    }
}