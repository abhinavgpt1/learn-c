int main()
{
    int N,p,j=1;
    printf("Enter N:");
    scanf("%d",&N);
    p=2;
    do
    {
        if(N%p==0)
        {
            j=0;
            break;
        }
        p++;
    }while(p<N);
    if(j==1||N==2)
    {
        printf("Prime No.");
    }
    else
        printf("Not a prime no.");
}
