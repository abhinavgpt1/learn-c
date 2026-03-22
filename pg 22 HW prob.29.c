int main()
{
    int N,p1,p2,Se=0,So=0;
    printf("Enter N:");
    scanf("%d",&N);

    while(N!=0)
    {

        p1=N%10;
        Se+=p1;
        N=N/10;
        p2=N%10;
        So+=p2;
        N=N/10;

    }
    printf("\nSum of odd digits = %d",So);
    printf("\nSum of even digits = %d",Se);
}
