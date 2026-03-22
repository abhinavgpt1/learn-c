int main()
{
    int A[30],B[20],C[50],i,N;
    printf("Enter size of array<=20:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter the data in A[%d]:",i);
        scanf("%d",&A[i]);
        printf("Enter the data in B[%d]:",i);
        scanf("%d",&B[i]);

    }
    for(i=0;i<N;i++)
    {
        C[i]=A[i]+B[i];
        printf("\nC[%d] = %d",i,C[i]);
    }
}
