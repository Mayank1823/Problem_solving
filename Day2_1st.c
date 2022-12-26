/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=2*i-1;j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
}
