#include<stdio.h>
int sumdigit(int n)
{
    if (n<10)
    {
        return n;
    }
    else{
        return n%10 + sumdigit(n/10);
    }
}
    int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sumdigit(a));
}