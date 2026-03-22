struct COMPLEX
{
    int R;
    int I;
};
int main()
{
    struct COMPLEX c1,c2,c3;

    printf("Enter 1st complex no.:");
    scanf("%d%d",&c1.R,&c1.I);
    printf("Enter 2nd complex no.:");
    scanf("%d%d",&c2.R,&c2.I);
    c3.R=c1.R+c2.R;
    c3.I=c1.I+c2.I;
    printf("\nSum = %d %d",c3.R,c3.I);


}
