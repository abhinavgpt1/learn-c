int main()
{
    int choice;
    printf("Enter choice(1,2,3):");
    scanf("%d",&choice);
    switch(choice)
{

    case 1:
        printf("Red\n");
        printf("Rose\n");
        break;
    case 2:
        printf("Green\n");
        printf("Plant\n");
        break;
    case 3:
        printf("Blue\n");
        printf("Sky\n");
        break;
    default :
        printf("\nWrong choice");
}

}
