int main()
{
    int N,r,rev,photo,count=0,p,x;
    printf("Enter N:");
    scanf("%d",&N);
    for(p=11;p<=N;p++)
    {
        rev=0;
        x=p;
        photo=x;
        while(photo!=0)
        {


            r=x%10;
            rev=rev*10+r;
            photo=photo/10;
        }
        if(rev==x)
        {
            printf("\nPalindrome = %d",x);
            count++;
        }


    }
    printf("\nNo.of palindrome between 11 to %d = %d",N,count);
}
