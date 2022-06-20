#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[50],n,item,found,i;
    printf("enter hoew many no. of :");
    scanf("%d",&n);
   
    
    for ( i = 0; i < n; i++)
    {
        printf("the elemnts are %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the no. to be searched ");
    scanf("%d",&item);

    found=0;
    for ( i = 0; i <n; i++)
    {
        if (a[i]==item)
        {
            found=1;
            break;
        }
    }
   
    
    
        if (found==1)
        {
            printf("the element found at pos %d",i+1);
        }
        else 
        {
        printf("element not found");
        }
       
        return 0;



        
    
    
    
    
}