#include<stdio.h>
int main(){
    int i,j,a[10][10],r,c;
    printf("enter how many rows and cols u want in 2d rray :");
    scanf("%d%d",&r,&c);
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
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        
        printf("\n");
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
    return 0;
    
}