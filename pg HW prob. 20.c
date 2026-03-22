int main()
{
     int div;
    float perc;
    printf("Enter your percentage:");
    scanf("%f",&perc);

    div=(perc>60?1:perc>50&&perc<60?2:perc>40&&perc<50?3:4);
    printf("\n\nYour division = %d",div);
}
