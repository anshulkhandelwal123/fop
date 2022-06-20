#include<stdio.h>
int main()
{
    int a[30],n,i,j;
    printf("enter the no. of elements ");
    scanf("%d",&n);
    //input
    for ( i = 0; i <n; i++)
    {
        printf("enter the elements %d:",i+1);
        scanf("%d",&a[i]);
    }
    //reverse
    for ( i = 0,j=n-1; i <j; i++,j--)
    {
        int t = a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for ( i = 0; i <n; i++)
   {
    
    printf(" %d\t" ,a[i]);
   }
    return 0;
}