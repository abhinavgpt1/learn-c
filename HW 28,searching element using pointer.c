int main()
{
    int a[100],N,i,wanted;
    int *p;
    printf("Enter no. of data:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);

    }
    p=&a[0];
    printf("Enter the data you wanted to search:");
    scanf("%d",&wanted);
    for(i=0;i<N;i++)
    {
        if(*(p+i)==wanted)
        {
            printf("\nFound at %d location",i);
        }

    }
}
