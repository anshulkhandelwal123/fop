#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n,item,found,i,mid, low ,high;
    printf("enter how many no. of an array :");
    scanf("%d",&n);
   a=(int*)malloc(n*sizeof(int));
   if (a==NULL)
   {
       printf("memory full");
       exit(1);
   }
   
    
    for ( i = 0; i < n; i++)
    {
        printf("the elemnts are %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the no. to be searched ");
    scanf("%d",&item);

    found=0;
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==item)
        {
            found =1;
            break;
        }
        else if (item>mid)
        {
            low= mid+1;
        }
        else{
            high=mid-1;
        }
        
        
    }
    
    
   
    
    
        if (found==1)
        {
            printf("the element found at pos %d",mid+1);
        }
        else 
        {
        printf("element not found");
        }
        free(a);
        a=NULL;

       
        return 0;
}