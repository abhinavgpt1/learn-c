int main()
{
   // long int N,p,FACT=1;
    int N,p,FACT=1;
    printf("Enter N:");
    scanf("%i",&N);      //%i===>%li
    p=1;
    while(p<=N)
    {
        FACT=FACT*p;
        p++;
    }
    printf("\nFACTORIAL OF N = %i",FACT);      //%i===>%li
}
