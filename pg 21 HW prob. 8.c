int main()
{
    int n,r,s;
    printf("Enter a 6 digit no.:");
    scanf("%i",&n);
    r=n%10;
    n=n/1e5;
    s=r+n;
    printf("\n\nSum of first and last digits=%i",s);
}
