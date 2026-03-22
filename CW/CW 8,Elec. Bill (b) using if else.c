int main()
{
    float units,bill,gst,gross;
    printf("Enter the units:");
    scanf("%f",&units);
    if(units<500)
    {
        bill=units*5;
        printf("\n\t\t\t\tBill = %f",bill);
        printf("\n\t\t\t\tUse More");
        printf("\n\t\t\t\tDesh Bhagat");
    }
    else
    {
        bill=units*10;
        printf("\n\t\t\t\tBill=%f",bill);
        printf("\n\t\t\t\t Use Less ");
        printf("\n\n\t\t\t\tDesh Ka Socho");
    }
    gst=bill*18/100;
    gross=bill+gst;
    printf("\nYour Gross Bill=%f",gross);
    printf("\nVisit us @ mygov.in for more details.");
}
