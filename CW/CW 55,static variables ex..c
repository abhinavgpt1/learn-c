int main()
{
    void myfunction();
    myfunction();
        myfunction();
            myfunction();

}
void myfunction()
{
    static int a=10;
    printf("%d\n",a);
    a=a+10;
}

/*{
    static int a;
    printf("%d",a);
}
*/
