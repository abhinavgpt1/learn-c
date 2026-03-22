int main()
{
    char s[200],r[200];
    printf("Enter s:");
    gets(s);
    printf("Enter r:");
    gets(r);
    int i=0;
    while(s[i]==r[i]&&s[i]!='\0'&&r[i]!='\0')
    {
        i++;
    }
    if(s[i]=='\0'&&r[i]=='\0')
        printf("\nSAME");
    else
        printf("\nNOT SAME");

}
