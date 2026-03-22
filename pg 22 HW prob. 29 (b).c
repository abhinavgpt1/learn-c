int main()
{
    int N,photo,se=0,so=0,p,i,r,digits=0;
    printf("Enter a No.:");
    scanf("%d",&N);
    photo=N;
    while(photo!=0)
    {
        r=photo%10;
        photo=photo/10;
        digits++;
    }
    for(i=1;i<=digits;i++)
    {
        p=N%10;
        if(p%2==0)
        {
            se+=p;
        }
        else
        {
            so+=p;
        }
        N=N/10;
    }
    printf("\nSum of even digits = %d",se);
    printf("\nSum of odd digits = %d",so);
}
