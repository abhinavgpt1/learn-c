int main()
{
    int units;
    float bill,tax,gross;
    printf("Enter the no. of units:");
    scanf("%d",&units);
    if(units<=200)
    {
        bill=units*2;
        printf("\n\t\t\t\t Use more");
    }
    else
        if(units<=400)
    {
        bill=units*3;
        printf("\n\t\t\t Conserve electricity");

    }
    else
        if(units<=600)
    {
        bill=units*4;
        printf("\n\t\t\t\t Use Elec. appropriately");
    }
    else
    {
        bill=units*5;
        printf("\n\t\t\t\t Use less");
    }
    tax=bill*10/100;
    gross=bill+tax;
    printf("\nGross bill=%f",gross);
}
