int main ()
{
    float a,b,c,d;
    printf("enter a,b,c,d:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
            if(a>d)
            printf("\nA is greatest");
            else
                printf("\nD is greatest");
        else
                if(c>d)
                printf("\nC is greatest");
                else
                    printf("\nD is greatest");

    }
    else
        if(b>c)
            if(b>d)
            printf("\nB is greatest");
            else
                printf("\nD is greatest");
        else
            if(c>d)
                printf("\nC is greatest");
            else
                    printf("\nD is greatest");




}
