/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int a[100],i,j,k,n;
    printf("enter the no. of candles");
    scanf("%d",&n);
    printf("enter the candles");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           a[i]=max;
       }
        
    }
    printf("No. of days is %d",max);
    
    
}
