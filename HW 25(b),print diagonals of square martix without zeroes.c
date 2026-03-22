int main()
{
    int a[10][10],N,R,C;
    printf("Enter order of square matrix a[]:");
    scanf("%d",&N);
    for (R=0;R<N;R++)
    {
        for(C=0;C<N;C++)
        {
          printf("Enter data at a[%d][%d]:",R,C);
          scanf("%d",&a[R][C]);

        }
    }
    for(R=0;R<N;R++)
    {
        for(C=0;C<N;C++)
        {
            if(R==C||R+C==N-1)
            {
                printf("%d ",a[R][C]);

            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
