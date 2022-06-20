#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    char s2[10];
    gets(s1);
    strcpy(s2,s1);
    printf("the valiue of s1 %s", s1);
    printf("the value of s2 %s", s2);
    printf("%s",s2);
}