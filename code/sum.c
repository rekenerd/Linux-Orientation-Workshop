//Program to Add N Numbers
#include <stdio.h>
int main()
{
    int n,i,a[20],sum=0;
    printf("Enter No. of Numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter a[%d]: ",i );
       scanf("%d",&a[i]);
       sum+=a[i];
    }
    printf("Sum = %d",sum);
}

