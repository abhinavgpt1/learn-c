int main()
{
    float a,b,c;
    int choice;
    printf("Enter choice(2,3):");
    scanf("%d",&choice);
    switch(choice)
    {
    case 2:
        printf("\nEnter a,b:");
        scanf("%f%f",&a,&b);
        float max=(a>b?a:b);
        printf("max=%f",max);
        break;
    case 3:
        printf("\nEnter a,b,c:");
        scanf("%f%f%f",&a,&b,&c);
        max=(a>b&&a>c?a:b>c?b:c);
        printf("max=%f",max);
        break;
    default :
        printf("\nWRONG choice");
    }
}
