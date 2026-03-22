int main()
{
    int N,i,s,c;
    printf("Enter a no. N:");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        printf("\n%d",i);
        printf("\t:\t");
        s=i*i;
        printf("%d",s);

        c=i*i*i;
        printf("\t%d",c);
        printf("\n");
    }
}
