int main()
{
    int N,photo,sum=0;
    printf("Enter N:");
    scanf("%d",&N);

    while(N!=0)
    {
        photo=N%10;
        N=N/10;
        sum+=photo;

    }
    printf("\nSum of digits = %d",sum);
}
