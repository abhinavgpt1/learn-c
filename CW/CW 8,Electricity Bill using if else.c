int main()
{
    float bill,gst,gross;
    int units;
    printf("Units used:");
    scanf("%i",&units);
    if(units<500)
    {
        bill= units*5;

        printf("\n\t\t\t\tUse more electricity");
    }
    else
    {
        bill=units*10;
        printf("\n\nUse less\n\n\n");
    }
    gst=bill*18/100;
    gross=bill+gst;
    printf("\nConsumer Gross Bill=%f",gross);

}
