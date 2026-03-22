int main()
{
    int i,count=0,len=0;
    char name[30];
    printf("Enter your name:");
    gets(name);
    printf("\n%s\n",name);
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
        switch(name[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;

        }
        len++;
    }
    printf("\nNo.of vowels=%d,length=%d",count,len);
}
