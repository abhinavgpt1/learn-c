int main()
{
    int a[50],b[50],i,j,N,M,count=0;
    printf("Enter no.of data for a[]:");
    scanf("%d",&N);
    printf("Enter no.of data for b[]:");
    scanf("%d",&M);
    for(i=0;i<N;i++)
    {
        printf("Enter value at a[%d]:",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<M;i++)
    {
        printf("Enter value at b[%d]:",i);
        scanf("%d",&b[i]);

    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(a[i]==b[j])
            {
                printf("\nCommon element = %d\n",b[j]);
                count++;
            }
        }
    }
    printf("\nCommon elements = %d",count);

}
