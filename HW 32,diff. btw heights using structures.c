struct HEIGHT
{
    int f,i;

};
int main()
{
    struct HEIGHT A,R,diff;
    printf("Enter height of aman:");
    scanf("%d%d",&A.f,&A.i);
    printf("Enter height of raman:");
    scanf("%d%d",&R.f,&R.i);
    int d= abs((A.f*12 +A.i)-(R.f*12+R.i));
    diff.f=d/12;
    diff.i=d%12;
    printf("difference in heights = %d %d",diff.f,diff.i);
}
