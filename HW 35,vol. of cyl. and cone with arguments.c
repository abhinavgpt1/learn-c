int main()
{
    void cyl(float r,float h);
    void cone(float r,float h);
    float r,h;
    printf("Enter r,h:");
    scanf("%f%f",&r,&h);
    cyl(r,h);
    cone(r,h);
}
void cyl(float r,float h)
{
    float v=3.14*r*r*h;
    printf("\nVolume of cylinder = %f",v);
}
void cone(float r,float h)
{
     float v=3.14*r*r*h/3;
    printf("\nVolume of cone = %f",v);
}
