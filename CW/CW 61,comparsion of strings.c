int main()
{
    char s1[100],s2[100];
    printf("Enter password:");
    gets(s1);
    printf("Repeat password:");
    gets(s2);
    int r=strcmp(s1,s2);
    if(r==0)
        printf("\nSame");
    else
        printf("\nNot Same");

}
