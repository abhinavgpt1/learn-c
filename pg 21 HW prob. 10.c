int main()
{
    float A,B,X;
    printf("Enter any two no.s:");
    scanf("%f%f",&A,&B);
    if(A!=B)
    {
        X=A;
        A=B;
        B=X;
        printf("\nA=%f,B=%f",A,B);
        printf("\nHence,values swapped");
    }
    else
        printf("No need to swap");

}
