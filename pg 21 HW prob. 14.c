int main()
{
    float pp,sp,x;
    printf("Enter the pp:");
    scanf("%f",&pp);
    printf("\nEnter the sale price:");
    scanf("%f",&sp);
    x=sp-pp;
    if(x<0)
    {
        x=-x;
        printf("\n\n\t\t\t Loss");
        printf("\n\n\t\t\t\t Amount@ loss=%f",x);

    }
    else
    {
        printf("\n\n\t\t\t\t Profit");
        printf("\n\n\t\t\t\t Amount @ profit=%f",x);
    }
}
