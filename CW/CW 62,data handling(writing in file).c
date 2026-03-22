int main()
{
    struct FILE *fp;
    fp=fopen("file.txt","w");
    fprintf(fp,"real JAVA\n");
    fprintf(fp,"ONLINE.com");
    fclose(fp);
}
