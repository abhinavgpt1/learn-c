int main()
{
    void sort(int *p,int N);
    int a[100],i,N;
    printf("Enter no. of data to be entered in a[]:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    sort(&a[0],N);
    printf("\nSorted Array:\n");
    for(i=0;i<N;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

}
void sort(int *p,int N)
{
    int i,j,temp;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}
//Alt.
/*
#include <stdio.h>
int main()
{
    void sort(float *p,int N);
    int N,i;
    float a[100];
    printf("Enter no. of data to be entered for sorting:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter data at a[%d]:",i);
        scanf("%f",&a[i]);
    }
    sort(&a[0],N);
    printf("Sorted Array is:\n");
    for(i=0;i<N;i++)
    {
        printf("%f",a[i]);
        printf(" ");
    }
}
void sort(float *p,int N)
{
    int i,j;
    float temp;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(*(p+j+1)>*(p+j))
            {
                temp=*(p+j+1);
                *(p+j+1)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
*/
