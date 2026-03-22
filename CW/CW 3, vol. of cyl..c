//Prog for vol of cyl
//V=3.14*R*R*h
int main()
{
    //INPUT values
    float V,R,h;

    /*printf("Enter the Radius and Height");
    scanf("%f%f",&R,&h);
    V=3.14*R*R*h;
    printf("Volume of the cylinder=%f",V);
    */
    printf("Enter the Radius:");
    scanf("%f",&R);
    printf("Enter the Height");
    scanf("%f",&h);
    V=3.14*R*R*h;
    printf("Volume of the cylinder=%f",V);
}
