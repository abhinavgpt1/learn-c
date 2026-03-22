int main()
{
    int N,i,Se=0,So=0;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        if(i%2==0)
        {
            Se=Se+i;
        }
        else
        {
            So=So+i;
        }
    }
    printf("\n Sum of Even nos. = %d",Se);
    printf("\n Sum of Odd nos. = %d",So);
}
