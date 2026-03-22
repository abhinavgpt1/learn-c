int main()
{
    struct FILE *fp;
    char filename[30];
    printf("Enter file name:");
    gets(filename);
    fp=fopen(filename,"w");
    fprintf(fp,"REAL JAVA\n");
    fprintf(fp,"ONLINE.com");
    fclose(fp);
    fp=fopen(filename,"r");
    while(!feof(fp))
    {
        char ch=fgetc(fp);
        putchar(ch);/////or printf("%c",ch);
    }
    fclose(fp);
}
