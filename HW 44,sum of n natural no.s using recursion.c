int main()
{
    int sum(int N);
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    int r =sum(N);
    printf("\nSum = %d",r);
}
int sum(int N)
{
    int s;
    if(N==1)
        return 1;
    else
        s=sum(N-1)+N;
    return s;
}
