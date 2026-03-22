int main()
{
    void GRACE(int *p,int N);
    int a[100],N,i;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter Marks at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    GRACE(&a[0],N);
    printf("\nMarks after grace\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",a[i]);
    }
}
void GRACE(int*p,int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(*(p+i)<50)
        {
            *(p+i)=50;
        }
    }
}
