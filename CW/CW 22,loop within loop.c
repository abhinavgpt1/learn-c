int main()
{
    int r,c,N,M;
    printf("Enter M:");
    scanf("%d",&M);
    printf("Enter N:");
    scanf("%d",&N);

    for(r=1;r<=M;r+=1)
    {
        printf("\t\t\t$");
        for(c=1;c<=N;c+=1)
        {
            printf("%d  ",c);
        }
        printf("$\n");
    }




}
