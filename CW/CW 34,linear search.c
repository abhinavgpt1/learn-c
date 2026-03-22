int main()
{
    int per[100],N,i,wanted,count=0;
    printf("Enter no. of students:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter marks at per[%d]:",i);
        scanf("%d",&per[i]);
    }
    printf("Enter the percentage to be searched:");
    scanf("%d",&wanted);
    for(i=0;i<N;i++)
    {
        if(wanted==per[i])
        {
            printf("Entry found at %d location\n",i);
            count++;

        }
    }
    if(count==0)
    {
        printf("\nNot found");
    }
    else
        printf("\nFound %d times",count);
}
//Also RIGHT
/*int main()
{
    int a[30],N,i,wanted,count=0;
    printf("Enter no. of data to be entered:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the data to be searched:");
    scanf("%d",&wanted);

    for(i=0;i<N;i++)
    {
        if(a[i]==wanted)
        {
            printf("Entry found at %d location",i);
            count++;
            printf("\n");
        }
    }
    printf("\nNo. of entries found = %d",count);
}
*/
