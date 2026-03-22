int main()
{
    int N,i;
    float val,sum=0,av;
    printf("Enter the no. of books purchased:");
    scanf("%d",&N);
    for(i=1;i<=N;++i)
    {
        printf("Enter the price of Book No. %d:",i);
        scanf("%f",&val);
        sum+=val;
    }
    printf("\n\nTotal price of books = %f",sum);
    av=sum/N;
    printf("\n\nAverage price of a book = %f",av);
}
