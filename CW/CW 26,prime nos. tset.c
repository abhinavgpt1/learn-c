int main()
{
    int N,d,J=0;
    printf("Enter N:");
    scanf("%d",&N);
    if(N==1)
    {
        printf("Not a prime neither composite");
    }
    else
        for(d=2;d<N;d++)
    {
        if(N%d==0)
        {
            J=1;
            break;
        }
    }
    if(J!=0)
    {
        printf("Not a prime");
    }
    else
        printf("prime no.");

}
