int main()
{
    int bill,units,rpu;
    printf("Enter units:");
    scanf("%d",&units);
    rpu=5;
    if(units>500)
        rpu=10;
    bill=units*rpu;
    printf("Bill=%d",bill);
}
