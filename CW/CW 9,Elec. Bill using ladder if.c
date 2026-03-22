int main()
{
    int units;
    float bill,tax,gross;
    printf("Enter no. of units:");
    scanf("%d",&units);
    if(units<=200)
    {
        bill=units*2;
        printf("\nUse more\n");
    }
    else


        if(units<=400)
    {
        bill=units*4;
    }
    else
        if(units<=600)
    {
        bill=units*6;
    }
    else
        bill=units*10;

    tax=bill*10/100;
    gross=bill+tax;
    printf("\nGross=%f",gross);
}
