int main()
{
    int area(int l,int b);
    int L,B;
    printf("Enter l,b:");
    scanf("%d%d",&L,&B);
    int p =area(L,B);
    printf("Area = %d",p);
}
int area(int l,int b)
{
    int a;
    a=l*b;
    return (a);
}
