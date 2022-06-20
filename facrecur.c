#include<stdio.h> //problem in printing the value of aa 
int fact(int n)
{
    if(n==0){
    return 1;
    }

else{
return n * fact(n-1);
}
}
int main(int a)
{
    /*int a;
    printf("enter the no. to be fact");
    scanf("%d",a);
  
    fact(a);*/
  
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
    
    

}