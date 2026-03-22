int main()
{
    int R,C;
    for(R=1;R<=4;R++)
    {
        for(C=4;C>=R;C--)
        {
            printf("%d",C);
        }
        printf("\n");
    }
}
