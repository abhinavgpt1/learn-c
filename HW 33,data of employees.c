struct EMPLOYEE
{
    int ID;
    float salary,hra,mra,da,gross,tax,net;
};
int main()
{

    struct EMPLOYEE e[100];
    int N,i;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter ID,salary,hra,mra,da:");
        scanf("%d%f%f%f%f",&e[i].ID,&e[i].salary,&e[i].hra,&e[i].mra,&e[i].da);
        e[i].gross=e[i].salary+e[i].hra+e[i].mra+e[i].da;
        e[i].tax=e[i].gross*10/100;
        e[i].net=e[i].gross-e[i].tax;
        printf("\nGross = %f",e[i].gross);
        printf("\nNet gross salary = %f\n",e[i].net);
    }
    float max=e[0].net;
    for(i=0;i<N;i++)
    {
        if(max<e[i].net)
        {
            max=e[i].net;
        }
    }
    printf("\n MAX gross salary = %f",max);

}
