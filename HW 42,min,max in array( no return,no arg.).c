int main()
{
    void array();
    array();
    printf("\nHence min.,max. found");

}
void array()
{
    float a[100];
    int i,N;
    printf("Enter no. of data to be entered in a[]:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%f",&a[i]);
    }
    float min=a[0];
    float max=a[0];

    for(i=0;i<N;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nMinimum = %f",min);
    printf("\nMaximum = %f",max);
}
