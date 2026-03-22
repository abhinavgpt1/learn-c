int main()
{
    int fact(int N);
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    int r=fact(N);
    printf("\nN! = %d",r);
}
int fact(int N)
{
    int i,fact=1;
    for(i=1;i<=N;i++)
    {
         fact=fact*i;
    }
    return fact;

}
