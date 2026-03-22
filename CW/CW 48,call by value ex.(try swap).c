//output is *b *b
int main()
{
    int swap(int ,int );
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    int c=swap(a,b);
    printf("%d    %d",c,b);
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}
/*
int main()
{
    void swap(int a,int b);
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("a = %d,b = %d",a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
*/
