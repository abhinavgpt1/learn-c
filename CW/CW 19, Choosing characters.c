int main()
{
    char choice;
    printf("Enter choice(R,G,B):");
    scanf("%c",&choice);
    switch(choice)
    {
    case 'R':
        printf("Red\n");
        printf("Rose\n");
        break;
    case 'G':
        printf("Green\n");
        printf("Plant\n");
        break;
    case 'B':
        printf("Blue\n");
        printf("Sky\n");
        break;
    default :
        printf("\nWrong choice");
    }
    printf("\n\n\t\t\t\tThanks");

}
