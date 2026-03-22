int main()
{
    int A,B,C;
    printf("Enter A,B,C:");
    scanf("%d%d%d",&A,&B,&C);
    if(A>B&&A>C)
        printf("\nA is Greatest");
    else
        if(B>A&&B>C)
        printf("\nB is Greatest");
    else
        printf("\nC is Greatest");
}
