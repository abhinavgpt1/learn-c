int main()
{
    int p,N;
    printf("Enter N:");
    scanf("%d",&N);
    p=1;
    while(p<=20)
    {
        printf("\n%d.%d*%d=%d",p,N,p,N*p);
        p++;
    }

}
