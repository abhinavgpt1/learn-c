//Project on Area of a Square and Circle
//ArSq=s*s,ArCi=3.14*R*R
int main()
{
    float s,R,ArSq,ArCi;

    printf("\tArea of Square\t\t\t\t\tArea of Circle");

    printf("\nSide length:");
    scanf("%f",&s);
    printf("\t\t\t\t\t\t\tRadius of circle:");
    scanf("%f",&R);

    ArSq=s*s,ArCi=3.14*R*R;
    printf("Area of square=%f",ArSq);

    printf("\t\t\t\tArea of Circle=%f",ArCi);

 }
