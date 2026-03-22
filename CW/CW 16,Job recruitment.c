int main()
{
    int exp,per;
    printf("Enter Experience and Percentage:");
    scanf("%d%d",&exp,&per);
    if(exp>=2)
    {
        if(per>=70)
            printf("\nSr. Eng.");
        else
            printf("\nJr. Eng.");

    }
    else
    {
        printf("\nTrainee");
    }
    printf("\n\nThanks");
}
