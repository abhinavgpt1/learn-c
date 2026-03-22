int main()
{
    void to(int p,int c,int m);
    int p,c,m;
    printf("Enter marks in P,C,M:");
    scanf("%d%d%d",&p,&c,&m);
    tot(p,c,m);
}
void tot(int p,int c,int m)
{
    int tot=p+c+m;
    printf("\nTotal marks = %d",tot);
}
