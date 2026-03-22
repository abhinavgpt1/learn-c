int main()
{
    int a[100],N,i;
    int *P;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter value at a[%d]:",i);
        scanf("%d",&a[i]);

    }
    P=&a[0];
    printf("\nOutput\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",*(P+i));
        *(P+i)=*(P+i)+10;
        printf("Now : %d\n",*(P+i));
    }
}
