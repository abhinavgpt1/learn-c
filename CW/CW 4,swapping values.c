int main()
{
    float A,B,temp;
    printf("Enter A and B");
    scanf("%f%f",&A,&B);
    /*
    temp=A;
    A=B;
    B=temp;
    printf("\nA=%f,B=%f",A,B);
    //print A=1.25465893,B=1.23564
    */
    A = A+B;
    B= A-B;
    A=A-B;
    printf("A=%f,B=%f",A,B);

}
