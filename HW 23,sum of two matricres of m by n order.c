int main()
{
    int a[10][50],b[10][50],c[10][50],R,C,M,N;
    printf("Enter no. of rows and columns :");
    scanf("%d%d",&M,&N);
    for(R=0;R<M;R++)
    {
        for(C=0;C<N;C++)
        {
            printf("Enter data at a[%d][%d]:",R,C);
            scanf("%d",&a[R][C]);
        }
    }
    for(R=0;R<M;R++)
    {
        for(C=0;C<N;C++)
        {
            printf("Enter data at b[%d][%d]:",R,C);
            scanf("%d",&b[R][C]);
        }
    }
    for(R=0;R<M;R++)
    {
        for(C=0;C<N;C++)
        {
            c[R][C]=a[R][C]+b[R][C];
            printf("%d  ",c[R][C]);
        }
        printf("\n");
    }

}
