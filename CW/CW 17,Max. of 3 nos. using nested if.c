int main()
{
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("\nA is greatest");
        else
        printf("\nC is greatest");
    }
    else

        if(b>c)
        printf("\nB is greatest");
        else
        printf("\nC is greatest");

}
