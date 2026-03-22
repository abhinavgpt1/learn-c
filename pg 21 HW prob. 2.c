int main()
{
    float km,m ,ft,inch,cm;
    printf("Enter the distance in km:");
    scanf("%f",&km);
    m=1000*km;
    cm=1e5*km;
    ft=3280.84*km;
    inch=39370.1*km;
    printf("\nDistance in metres=%f",m);
    printf("\nDistance in centimetres=%f",cm);
    printf("\nDistance in feet=%f",ft);
    printf("\nDistance in inches=%f",inch);
}
