int main()
{
    char s1[100],s2[100];
    printf("Enter string:");
    gets(s1);
    int len= strlen(s1);
    printf("Length = %d",len);
    strrev(s1);
    printf("\nReverse = %s",s1);
    strcpy(s2,s1);
    printf("\nCopied string = %s",s2);
    strlwr(s1);
    printf("\nLower case= %s",s1);
    strupr(s1);
    printf("\nUpper case = %s",s1);
    strcat(s1,s2);
    printf("\nJoin = %s",s1);
    strcat(s1,"");
    strcat(s1,s2);
    printf("\nJoined word = %s",s1);
}
