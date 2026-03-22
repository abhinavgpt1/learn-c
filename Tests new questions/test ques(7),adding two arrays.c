//SOL 1
int main()
{
    int M,N,a[50],b[100],i;
    printf("Enter no. of data to be entered in a[]:");
    scanf("%d",&M);
    printf("Enter no. of data to be entered in b[](<=50):");
    scanf("%d",&N);
    for(i=0;i<M;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<N;i++)
    {
        printf("Enter data at b[%d]:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<M;i++)
    {
       b[i+N]=a[i];

    }
    printf("\nConstructed array:\n");
    for(i=0;i<N+M;i++)
    {
        printf("\nb[%d] = %d",i,b[i]);
    }

}//SOL 2
/*
int main()
{
    int n,m,i;
    printf("Enter N:");
    scanf("%d",&n);
    int a[n];
    printf("Enter M:");
    scanf("%d",&m);
    int b[m];
    for(i=0;i<n;i++)
    {
        printf("For A:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("For B:");
        scanf("%d",&b[i]);
    }
    int c[m+n];
    printf("Final result:\n");
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        printf("%d\n",c[i]);
    }
    for(i=n;i<m+n;i++)
    {
        c[i]=b[i-n];
        printf("%d\n",c[i]);
    }
}
*/
