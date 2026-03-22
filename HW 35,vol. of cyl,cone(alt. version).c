int main()
{
    void cyl(float R,float H);
    float R,H;
    printf("Enter R,H:");
    scanf("%f%f",&R,&H);
    void cone(float r,float h);
    float r,h;
    printf("Enter r,h:");
    scanf("%f%f",&r,&h);
    cyl(R,H);
    cone(r,h);
}
void cyl(float R,float H)
{
    float v=3.14*R*R*H;
    printf("\nVolume of cylinder = %f",v);
}
void cone(float r,float h)
{
     float v=3.14*r*r*h/3;
    printf("\nVolume of cone = %f",v);
}
