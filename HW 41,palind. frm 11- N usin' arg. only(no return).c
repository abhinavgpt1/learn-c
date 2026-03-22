int main()
{
    void pd(int N);
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    pd(N);
    printf("\nHence searched");
}
void pd(int N)
{
    int i,rev,r,photo,count=0;
    for(i=11;i<=N;i++)
    {
        photo =i;
        rev=0;
        while(photo!=0)
        {
         r=photo%10;
         rev=rev*10+r;
         photo=photo/10;
        }


        if(rev==i)
        {
            printf("\nPalindrome = %d",i);
            count++;
        }

    }
    printf("\nNo. of palindrome's found = %d",count);

}
