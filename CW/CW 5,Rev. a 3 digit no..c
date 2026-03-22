//Program for reversing a 3 digit no.
int main()
{
    int N,R1,R2,Rev,Sum;
    printf("Enter a three digit no.: ");
    scanf("%d",&N);
    R1 = N%10;
    N=N/10;
    R2=N%10;
    N=N/10;
    Rev=R1*100+R2*10+N*1;
    printf("\nReverse=%i",Rev);
    Sum=R1+R2+N;
    printf("\nSum of the digits=%i",Sum);
}
