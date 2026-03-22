int main ()
{
    void RECT();
    void CIRCLE();
    RECT();
    CIRCLE();
    RECT();
    printf("\nBack in Main");

}
void RECT()
    {
        int l,b,a;
        printf("Enter l and b:");
        scanf("%d%d",&l,&b);
        a=l*b;
        printf("Area = %d",a);
    }
    void CIRCLE()
    {
        int r;
        float ar;
        printf("\n\nEnter radius of circle:");
        scanf("%d",&r);
        ar=3.14*r*r;
        printf("Area of circle = %f\n",ar);
    }
