int main()
{
    int N,p;
    printf("Enter N:");
    scanf("%d",&N);
    p=1;
    do
    {
        printf("%d * %d = %d\n",N,p,N*p);
    p++;
    }while(p<=20);
}
