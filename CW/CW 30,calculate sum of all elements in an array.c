int main()
{
    int A[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter data at A[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=A[i];
        printf("%d\n",A[i]);
    }
    printf("Sum = %d",sum);
}
