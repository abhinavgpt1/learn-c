int main ()
{
    int Min,Hr;
    printf("Enter the time in minutes:");
    scanf("%i",&Min);
    Hr=Min/60;
    Min=Min-Hr*60;
    printf("\n\nTime(in hr and min)=%iHr,%iMin",Hr,Min);
}
