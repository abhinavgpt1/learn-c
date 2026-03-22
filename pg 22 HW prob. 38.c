int main()
{
    int A[30],N,B[30],i;
    printf("Enter size of array:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data in A[%d]:",i);
        scanf("%d",&A[i]);

    }
    for(i=0;i<N;i++)
    {
        B[i]=A[i];
    }
    for(i=0;i<N;i++)
    {
        A[i]=B[N-i-1];
        printf("\nA[%d] = %d",i,A[i]);
    }
}
