#include<stdio.h>
int main(){
    int a[30],i,n,flag;
    printf("enter how many of array is :");
    scanf("%d",&n);
    //inpit
    for ( i = 0; i <n; i++)
    {
        printf("the elements in aarayn is %d",i+1);
        scanf("%d",&a[i]);
    }
    //check
    flag=1;
    for ( i = 1; i < n; i++)
    {   
        if (a[i]<a[i-1])
        {
            flag =0;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("the array is in inc order");

    }
    else
    printf("the array is not in inc order");
    return 0;
    
    
}