#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[200];
    gets(s1);
    gets(s2);
    strcpy(s3,s1);
    strcat(s3,s2);
    printf("%s",s3);
    
}