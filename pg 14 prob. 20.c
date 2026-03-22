int main()
{
    int i,sum=0;
    for(i=2;i<=4;i++)
    {
        if(i%2==0)
            printf("%d ",i);
        sum+=i;
    }
    printf("%d",sum);
}
