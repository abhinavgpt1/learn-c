int main()
{
    int per[10][50],sum=0,M,N,R,C,sa=0,avg;
    printf("Enter no. of classes and students :");
    scanf("%d%d",&M,&N);
    for(R=0;R<M;R++)
    {
        for(C=0;C<N;C++)
        {
            printf("Enter marks at per[%d][%d]:",R,C);
            scanf("%d",&per[R][C]);
        }
    }
        printf("\nResult\n");
        for(R=0;R<M;R++)
        {
            for(C=0;C<N;C++)
            {
                sum+=per[R][C];
                printf("%d  ",per[R][C]);
                sa+=per[R][C];
            }
            avg=sa/N;
            printf(":Avg. = %d\n",avg);
            sa=0;
        }
        printf("\nAverage percentage = %f",sum*1.0/(M*N));

}
