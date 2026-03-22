int main()
{
    char s[100],r[100];
    printf("Enter string:");
    gets(s);

    strcpy(r,s);
    strrev(s);
    if(strcmp(s,r)==0)
        printf("\nSame");
    else
        printf("\nNot same");

}
//ALT VERSION
/*
#include <stdio.h>
int main()
{
char s1[100],s2[100];
printf("Enter string:");
gets(s1);
strcpy(s2,s1);
strrev(s2);
int r=strcmp(s1,s2);
if(r==0)
    printf("strings are SAME");
else
    printf("string are not same");

}
*/
