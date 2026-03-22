int main()
{
    int v=5;
    int *P;
    P=&v;
    printf("v = %d",v);
    printf("\n&v = %d",&v);
    printf("\nP = %d",P);
    printf("\n*P = %d",*P);

    *P=9;
    printf("\nv=%d",v);
}
