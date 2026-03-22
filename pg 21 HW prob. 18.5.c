int main()
{
    float P,C,M,E,Xt,perc;
    printf("Marks in Physics:");
    scanf("%f",&P);
    printf("\nMarks in Chemistry:");
    scanf("%f",&C);
    printf("\nMarks in Maths.:");
    scanf("%f",&M);
    printf("\nMarks in English:");
    scanf("%f",&E);
    printf("\nMarks in Add. subj.:");
    scanf("%f",&Xt);
    perc=(P+C+M+E+Xt)/500*100;
    if(perc>90)
    {
        printf("\n\n\t\t\t\tCongratulations");
        printf("\nYou got A1 grade");
    }
    else
        if(perc<=90,perc>80)
    {
        printf("\n\n\t\t\t\tCongratulations");
        printf("\nYou got A2 grade");
    }
    else
       if(perc<=80,perc>70)
    {
        printf("\n\n\t\t\t\tCongratulations");
        printf("\nYou got B1 grade");
    }
    else
        if(perc<=70,perc>60)
    {
        printf("\n\n\t\t\t\tCongratulations");
        printf("\nYou got B2 grade");
    }
    else
        if(perc<=60,perc>50)
    {
        printf("\nYou got C1 grade");
        printf("\n\t\t\tWork Hard");
    }
    else
        printf("\n\t\t\tSorry,you FAILED");
    printf("\n\n\t\t\tThanks for Visiting Us");
}
