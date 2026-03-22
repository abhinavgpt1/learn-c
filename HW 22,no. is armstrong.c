int main()
{
    int N,photo,sum=0,x;
    printf("Enter a no. N:");      //371 is armstrong no.
    scanf("%d",&N);
    x=N;
    while(N!=0)
    {
        photo=N%10;
        N=N/10;
        sum+=photo*photo*photo;

    }
    if(sum==x)
    {
        printf("\nNo. is Armstrong");
    }
    else
        printf("\nNo. is not Armstrong no.");
}
