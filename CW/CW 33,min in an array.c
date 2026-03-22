int main()
{
    int a[30],i,N,min;
    printf("Enter size of array:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);

    }
    min=a[0];
    for(i=1;i<N;i++)
    {
        /*if(a[i-1]>a[i])         ......it's fine too
        {
            min=a[i];
        }
        */
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nMin = %d",min);
}
