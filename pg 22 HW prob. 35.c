int main()
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sm,em,i,sum=0;
    printf("Enter start and end month:");
    scanf("%d%d",&sm,&em);
    for(i=sm;i<=em;i++)
    {
        sum+=days[i];
    }
    printf("\nTotal days=%d",sum);
}
