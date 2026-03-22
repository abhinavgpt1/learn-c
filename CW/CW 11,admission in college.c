int main()
{
    int air;
    float p2;
    printf("Enter percentage and AIR:");
    scanf("%f%d",&p2,&air);
    if(p2>=80 || air<=100)
        printf("Yes");
    else
        printf("No");
}
