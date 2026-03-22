/*//alt.version
int main()
{
    void swap(int *a,int *b);
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d,b = %d",a,b);
}
void swap(int *p,int *w)
{
    int temp;
    temp=*p;
    *p=*w;
    *w=temp;
}
*/
int main()
{
    void swap(int *a,int *b);
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d,b = %d",a,b);
}
void swap(int *c,int *d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
}
