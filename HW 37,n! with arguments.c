int main()
{
    void FACT(int N);
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    FACT(N);

}
void FACT(int N)
{
    int i,fact=1;
    for(i=1;i<=N;i++)
        fact=fact*i;
    printf("\nFACT of N = %d",fact);

}
