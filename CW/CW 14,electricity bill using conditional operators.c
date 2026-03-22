int main ()
{
    /*
    int units;
    float bill;
    printf("Enter the no. of units used:");
    scanf("%d",&units);
    (units<500?(bill=units*5.0):(bill=units*10.0));
    printf("\n\nYour bill=%f",bill);
    */
    float units,bill;
    printf("enter the no. of units consumed:");
    scanf("%f",&units);
    int rpu=(units<=500?5:10);
    bill=units*rpu;
    printf("\nYour bill=%f",bill);
}
