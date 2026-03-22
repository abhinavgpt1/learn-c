//Project on Simple Interest
//SI=P*r*t/100
int main()
{
    float SI,P,r,t;

    printf("Enter the Principal Amount:");
    scanf("%f",&P);

    printf("Enter the rate:");
    scanf("%f",&r);

    printf("Enter the time:");
    scanf("%f",&t);

    SI=P*r*t/100;
    printf("Simpe Interest:%f",SI);

}
