#include<stdio.h>
int main (){
    int a [20],i,n,max;
    printf("enter no.:");
    scanf("%d",&n);
    //input array
    for ( i = 0; i < n; i++)
    {
        printf("enter elements %d :",i+1);
        scanf("%d",&a[i]);
    }
    //max
    max=a[0];
    for ( i = 1; i <n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    printf("no is max %d",max);
    return 0;
    

}