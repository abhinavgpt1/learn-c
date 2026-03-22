//max of 3 nos.
int main ()
{
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    //int max=(a>b&&a>c?a:b>a&&b>c?b:c);
    //or
    int max=(a>b&&a>c?a:b>c?b:c);
    printf("max = %d",max);

}
