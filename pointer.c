#include<stdio.h>
int main(){
int a =5;
int *p;
p = &a ;
*p =&a;
*p=5;
printf("address of a is %d" a);
printf("%d",&a);
printf("%d", p);
printf("%d",*p);
return 0;


}