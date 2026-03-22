int main()
{
    int N,photo,rev=0,r;
    printf("Enter N:");
    scanf("%d",&N);
    photo=N;
    while(photo!=0)
        {
            r=photo%10;
    rev=rev*10+r;
    photo=photo/10;
        }
    if(rev==N)
        printf("\nNo. is Pelindrome");
    else
        printf("\nNo. is not a Pelindrome");
}
