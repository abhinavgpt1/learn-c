int main()
{
    void search(int*p,int wanted,int N);
    int a[100],i,N,wanted;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter entry to be searched:");
    scanf("%d",&wanted);
    search(&a[0],wanted,N);
    printf("\n\nHence,searching complete");

}
void search(int*p,int wanted,int N)
{
    int count=0,i;
    for(i=0;i<N;i++)
    {
        if(*(p+i)==wanted)
        {
            printf("\nFound entry at %d location",i);
            count++;
        }
    }
    printf("\nNo. of entries found = %d",count);
}
