int main()
{
    struct FILE *R,*W;
    char src[40],des[40],ch;
    printf("Enter file name:");
    gets(src);
    printf("Enter file name to write:");
    gets(des);
    R=fopen(src,"r");
    if(R==0)
    {
        printf("File not found");
    }
    else
    {
        W=fopen(des,"w");
        while(!feof(R))
        {
            ch=fgetc(R);
            fprintf(W,"%c",ch);
            printf("%c",ch);
        }
    }
    fclose(R);
    fclose(W);

}
