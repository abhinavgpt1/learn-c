int main()
{
    void RECT(int l,int b);
    int l,b;
    printf("Enter l and b:");
    scanf("%d%d",&l,&b);
    RECT(l,b);
}
void RECT(int l,int b)
{
    int area=l*b;
    printf("Area=%d",area);
}
