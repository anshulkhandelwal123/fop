#include<stdio.h>
int main(){
    int a[20],i,t,n;
    printf("ente rthe no to be printed");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("elements in aaraay is %d",i+1);
        scanf("%d", &a[i]);

    }
    t=a[0];
    for ( i = 1; i < n; i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=t;
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);

    }
    return 0;
    
    
    
}