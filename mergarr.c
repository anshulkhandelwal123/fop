#include<stdio.h>
int main(){
    int a[20],b[20],c[50],i,j,k,n1,n2;
    printf("enter the first array number elemnts:");
    scanf("%d",&n1);
    
    
    for ( i = 0; i < n1; i++)
    {
        printf("enter the elememnts %d",i+1);
        scanf("%d",&a[i]);

    }
      printf("enter the second array number elemnts:");
    scanf("%d",&n2);
    
        printf("enter the elememnts");
        scanf("%d",&b[j]);
        
    }
    //merging
    for ( i = 0,j=0,k=0; i < n1&&j<n2; k++)
    {
        if (a[i]<a[j])
        {
            c[k]=a[i++];
        }
        else
        c[k]=b[j++];
        
    }
    for ( i = 0; i < n1+n2; i++)
    {
        printf("%d\t",c[i]);

    }
    return 0;
    
    
    
}