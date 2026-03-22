int main()
{
    float SI,P,r,t;
    printf("p,r,t");
    scanf("%f%f%f",&P,&r,&t);
    SI=P*r*t/100;
    printf("si=%f",SI);
// writing int ahead of Si,P,r,t makes result 0 at any value........ans compiler understands what the variables first and applies the formula.
}
