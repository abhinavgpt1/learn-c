//Board Marks
//For PCM,calculation of percentage
//Perc=(P+C+M)/100
int main()
{
    float Perc,P,C,M;
    printf("Marks in P,C,M:");
    scanf("%f%f%f",&P,&C,&M);

    Perc=(P+C+M)/3;
    printf("Percentage=%f",Perc);
    /*float %,P,C,M;
    printf("Marks in Physics:");
    scanf("%f",&P);
    printf("Marks in Chemistry:");
    scanf("%f",&C);
    printf("marks in Mathematics:");
    scanf("%f",&M);

    % =(P+C+M)/3;
    printf("Percentage=%f",%);
    QUES: Cant we use % sign?........no, but we can use '%'.
    */
}
