int main()
{
    int a[10][10],b[10][10],ab[10][10],R,C,RA,CA,RB,CB,sum,k;//sum=0 could be used with below sum=0 collectively
    printf("Enter order of a[][]:");
    scanf("%d%d",&RA,&CA);
    printf("Enter order of b[][]:");
    scanf("%d%d",&RB,&CB);
    if(CA!=RB)
    {
        printf("Invalid Order");
    }
    else
    {
        for(R=0;R<RA;R++)
        {
            for(C=0;C<CA;C++)
            {
                printf("Enter value in a[%d][%d]:",R,C);
                scanf("%d",&a[R][C]);
            }
        }
        for(R=0;R<RB;R++)
        {
            for(C=0;C<CB;C++)
            {
                printf("Enter value in b[%d][%d]:",R,C);
                scanf("%d",&b[R][C]);
            }
        }
        for(R=0;R<RA;R++)
        {
            for(C=0;C<CB;C++)
            {
                sum=0;
               for(k=0;k<CA;k++)
               {
                   sum+=a[R][k]*b[k][C];
               }
               ab[R][C]=sum;
                //sum=0;
            }

        }
        printf("\nMultiplied matrix:\n");
        for(R=0;R<RA;R++)
        {
            for(C=0;C<CB;C++)
            {
                printf("%d ",ab[R][C]);
            }
            printf("\n");
        }

    }
}
