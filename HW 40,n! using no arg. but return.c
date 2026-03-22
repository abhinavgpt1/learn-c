int main()
{
    int fact();
    int r=fact();
    printf("\nN! = %d",r);
}
int fact()
{
    int N,i,fact=1;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    return fact;
}
