int main()
{
   int factorial(int N);
   int N;
   printf("Enter N:");
   scanf("%d",&N);
   int f=factorial(N);
   printf("\nfactorial = %d",f);
}
int factorial(int N)
{
    int f;
    if(N==1)
        return 1;
    else
        f=factorial(N-1)*N;
    return f;
}
