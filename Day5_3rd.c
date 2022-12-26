/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int i,j,k,a[100],b[100],c[100],n,n1,count,count1,sum=0,sum1=0,C;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=n/2;
    for(i=0;i<n1;i++)
    {
        b[i]=a[i];
        printf("The first half is %d\n",b[i]);
        sum=sum+b[i];
    }
    for(i=n1;i<n;i++)
    {
        c[i]=a[i];
        printf("the second half is %d\n",c[i]);
        sum1=sum1+a[i];
    }
    C=sum*sum1;
    printf("product is %d",C);
    

    
}
