//Board Marks
//For PCM,calculation of percentage
//Perc=(P+C+M)/100
int main()
{
    float Perc,P,C,M;
    printf("Marks in Physics:");
    scanf("%f",&P);
    printf("Marks in Chemistry:");
    scanf("%f",&C);
    printf("Marks in Mathematics:");
    scanf("%f",&M);

    Perc =(P+C+M)/3;
    printf("Percentage=%f",Perc);

}
