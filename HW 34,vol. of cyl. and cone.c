int main()
{
    void cyl();
    void cone();
    cyl();
    cone();

}
void cyl()
{
    float v,r,h;
    printf("Enter r,h:");
    scanf("%f%f",&r,&h);
    v=3.14*r*r*h;
    printf("Volume of Cylinder = %f",v);
}
void cone()
{
    float v,r,h;
    printf("\nEnter r,h:");
    scanf("%f%f",&r,&h);
    v=3.14*r*r*h/3;
    printf("\nVolume of Cone = %f",v);
}
