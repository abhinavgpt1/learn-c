int main()
{
    int A[30],i,avg,total=0,N;
    printf("Enter no. of students appeared:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at A[%d]:",i);
        scanf("%d",&A[i]);

    }
    for(i=0;i<N;i++)
    {
        total+=A[i];
        printf("%d\n",A[i]);
    }
    avg=total/N;
    printf("Average =%d",avg);//avg can be taken floating
}
