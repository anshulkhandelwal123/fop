#include<stdio.h>
#include<stdlib.h>
int main(){
    int **a,i,j,r,c,rowsum,colsum;
    printf("enter how many rows and cols u want in 2d rray :");
    scanf("%d%d",&r,&c);
    a=(int**)malloc(r*sizeof(int*));
    for ( i = 0; i < r; i++)
    {
        a[i]=(int*)malloc(c*sizeof(int*));
    }
    
    //input
    for ( i = 0; i < r; i++){
    for ( j = 0; j< c; j++){
    
        printf("the elements are %d%d:-",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    
    }
    //simple output
    printf("the 2d array is :\n");
    for ( i = 0; i <r; i++)
    {rowsum=0;
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
            rowsum+=a[i][j];
            
                    }
        
        printf("%d\n",rowsum);
    }


    //transpose
     printf("the 2d array is :\n");
    for ( i = 0; i <c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            printf("%d\t",a[j][i]);
        }
        
        printf("\n");
    }
    for ( i = 0; i < r; i++)
    {
        free(a[i]);
        free(a);
        a=NULL;

    }
    
    return 0;
    
}