int main()
{
    int N,FACT=1,p;
    printf("Enter N:");
    scanf("%d",&N);
    p=1;
    do
    {
        FACT=FACT*p;
        p++;
    }while(p<=N);
    printf("\nN! = %d",FACT);
}
