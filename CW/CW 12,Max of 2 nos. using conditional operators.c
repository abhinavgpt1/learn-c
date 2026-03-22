//Max of 2 nos
int main()
{
    int A,B;
    printf("Enter any two nos. A,B:");
    scanf("%d%d",&A,&B);
   // (A>B?printf("\nA is Greatest"):printf("\nB is Greatest"));
    int max=(A>B?A:B);
    printf("max=%d",max);
}
