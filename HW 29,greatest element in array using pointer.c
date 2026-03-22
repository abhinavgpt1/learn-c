int main()
{
    int a[100],N,i,max;
    int *p;
    printf("Enter no. of data:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    p=&a[0];
    max==a[0];
    for(i=0;i<N;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    printf("\nMax = %d",max);
}
