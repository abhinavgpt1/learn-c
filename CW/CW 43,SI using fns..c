int main()
{
    void SI();
    SI();
}
void SI()
{
    float p,r,t,si;
    printf("Enter p,r,t:");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("%f",si);
}
