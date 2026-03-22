int main()
{
    void GREAT(float a,float b);
    float a,b;
    printf("Enter A,B:");
    scanf("%f%f",&a,&b);
    GREAT(a,b);
    printf("\nHence Greatest found");
}
void GREAT(float a,float b)
{
    float max=a;
    if(a>b)
        printf("A is Greatest");
    else
        if(b>a)
        {
        printf("B is Greatest");
        max=b;}
    else
        printf("Both are equal");
        printf("\nMAX = %f",max);
}
