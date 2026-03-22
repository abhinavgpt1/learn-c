int main()
{
    float sp,pp,x;
    printf("Enter the purchase price:");
    scanf("%f",&pp);
    printf("\nEnter the selling price:");
    scanf("%f",&sp);
    x=sp-pp;
    if(x>0)
    {
        printf("\n\t\t\t\t Profit");
        printf("\nAmount @ profit = %f",x);
    }
    else
        if(x<0)
    {
        x=-x;
        printf("\n\t\t\t\t Loss");
        printf("\n Amount @ loss = %f",x);
    }
    else
    {
        printf("\n\t\t\t\tNo gain or loss");
    }
}
