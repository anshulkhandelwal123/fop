#include<stdio.h>
int main(){
    int a[30],n,i,flag;
    printf("enter how many elenments ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("the elements arae %d ",i+1);
        scanf("%d",&a[i]);
    }
    
    flag=1;
    for ( i = 0; i <n/2; i++)
    {
        if (a[i]!=a[n-i-1])
        {
            flag=0;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("the array is palindrome");
    }
    else
    printf("the array is not palindrome");
    return 0;
    
    

}