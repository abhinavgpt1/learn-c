int main()
{
    int A[100],i,j,N,temp;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter value at A[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",A[i]);
    }
}
