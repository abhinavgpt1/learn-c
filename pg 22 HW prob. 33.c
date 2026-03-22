int main()
{
    int N,rev,digits=0,photo,p,r,s,sum=0;
    printf("Enter N:");
    scanf("%d",&N);
    photo=N;
    do
    {
        s=N%10;
        N=N/10;
        digits++;

    }while(N!=0);
    p=1;
    do
    {
        r=photo%10;
        photo=photo/10;
        sum=sum*10+r;
        p++;
    }while(p<=digits);

    rev=sum;
    printf("\nReverse = %d",rev);
}
