int main()
{
    int n,r1,r2,r3,r4,Rev,Sum;
    printf("Enter a 5 digit no.:");
    scanf("%i",&n);
    r1=n%10;
    n=n/10;
    r2=n%10;
    n=n/10;
    r3=n%10;
    n=n/10;
    r4=n%10;
    n=n/10;
    Rev=r1*1e4+r2*1e3+r3*1e2+r4*1e1+n;
    printf("\n\nReverse=%i",Rev);
    Sum=r1+r2+r3+r4+n;
    printf("\n\nSum of the digits=%i",Sum);

}
