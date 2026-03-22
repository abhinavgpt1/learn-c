struct STUDENT
{
    int roll;
    float cpp,j,tot,perc;
};
int main()
{
    struct STUDENT s[100];
    int N,i;
    printf("Enter no. of students:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter Roll no.,cpp,java marks:");
        scanf("%d%f%f",&s[i].roll,&s[i].cpp,&s[i].j);
        s[i].tot=s[i].cpp+s[i].j;
        s[i].perc=s[i].tot*100/200;
    }
    printf("\nResult\n");
    float MAX=s[0].perc;
    for(i=0;i<N;i++)
    {
        printf("Roll = %d  got percentage %f\n",s[i].roll,s[i].perc);
        if(MAX<s[i].perc)
            MAX=s[i].perc;
    }
    printf("\nMAX = %f",MAX);
}
