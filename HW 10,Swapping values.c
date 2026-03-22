//Swapping the values of A and B
int main()
{
    float A,B,C,D;
    A=1;
    B=2;
    printf("A is %f",A);
    printf("\nB is %f",B);
    /*
    A=C;
    B=D;
    printf("\nA is %f",A);           can't C or D be printed?????    ans. no. Only no.'s can be.
    printf ("\nB is %f",B);
*/
    C=A;
    D=B;
    /* Not compulsory
    printf("\n\nC is %f",C);
    printf("\nD is %f",D);
*/
    B=C;
    A=D;
    printf("\n\nA is %f",A);
    printf("\nB is %f",B);
}
