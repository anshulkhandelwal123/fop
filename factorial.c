#include<stdio.h>
int fact(int n){
int i ,ans;

for ( i = n,ans=1; i >= 1; i--)

    ans= ans *i;
    return ans;
}
int main()
{
    int x,result;
    printf("enter the no.:");
    scanf("%d",&x);
    result=fact(x);
    printf("the factorail of no. is %d",result);
}
