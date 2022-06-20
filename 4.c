#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20], s2[20];
    gets(s1);
    gets(s2);
    if (strcmp(s1,s2)>0)
    {
        puts("the s1 i greater");
    }
        else if (strcmp(s1,s2)<0)
      { 
            puts("the s2 is greater");
      }
        else{
        puts("they are eqauls");
        
        }
    
    
}