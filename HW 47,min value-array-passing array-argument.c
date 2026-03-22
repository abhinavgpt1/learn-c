int main()
{
    void min(int *p,int N);
    int i,N,a[100];
    printf("Enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    min(&a[0],N);

}
void min(int *p,int N)
{
    int i,m;
    m=*p;
    for(i=0;i<N;i++)
    {
        if(*(p+i)<m)
        {
            m=*(p+i);
        }
    }
    printf("\nMin value = %d",m);
}
