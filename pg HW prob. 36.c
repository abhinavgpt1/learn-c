int main()
{
    int per[30],N,i,c1=0,c2=0,c3=0;
    printf("Enter no. of students appeared:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter percentage at per[%d]:",i);
        scanf("%d",&per[i]);
    }
    for(i=0;i<N;i++)
    {
        if(per[i]>85)
        {
            printf("\nYou got 1st division");
            printf("\nCongrats");
            c1++;

        }
        else
            if(per[i]>65&&per[i<=85])
        {
            printf("\nYou got 2nd division");
            c2++;
        }
        else
            {printf("\nYou got 3rd division");
             c3++;
             }
    }
    printf("\nStudents who got 1st division = %d",c1);
    printf("\nStudents who got 2nd division = %d",c2);
    printf("\nStudents who got 3rd division = %d",c3);
}
