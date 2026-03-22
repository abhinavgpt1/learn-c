int main()
{
    int fact,N,FACT=1;
    printf("Enter a No.:");
    scanf("%i",&N);
    for(fact=1;fact<=N;fact++)
    {
        FACT=FACT*fact;

    }
    printf("\nFactorial of N = %d",FACT);
}
