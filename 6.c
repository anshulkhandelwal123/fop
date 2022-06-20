#include<stdio.h>
#include<string.h>
int inc (int n )
{
    n++;
    return n;
}
int main(){
    int x ,y;
    printf("enter the no. x ");
    scanf("%d",&x);
    y= inc(x);
    printf("%d",y);
    
}