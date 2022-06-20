#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a ,b,c;
    float x,y,d;
    printf("enter the two no. to add :-");
    scanf("%d%d",&a,&b);
    c=a+b;
    c=a-b;
    printf("%d",c);
printf("enter the two no. to add :-");
    scanf("%f%f",&x,&y);
    d=x+y;
    d=x-y;
    printf("%f",d);
    return 0;
}