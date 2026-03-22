int main()
{
    int msg, calls,rent=100;
    float Bill,gross,b1m,b1c,tax;

    printf("enter the number of messages sent:");
    scanf("%d",&msg);

    printf("\n\n Enter the no. of calls made:");
    scanf("%d",&calls);

    if(msg<=50)
    {
        b1m=msg*0.1;
    }
    else
    {
        b1m=msg*0.25;
    }

    if(calls<=200)
    {
        b1c=calls*0.75;
    }
    else
    {
        b1c=calls*0.95;
    }

    Bill=b1m+b1c+rent;
    if(Bill<=1000)
    {
        tax=Bill*0.125;
    }
    else
    {
        tax=Bill*0.225;
    }
    gross=Bill+tax;

    printf("\n\n\t\t\t\t Gross Bill=%f",gross);
    printf("\nThnku fr visiting");

  ////Method 2
    /*int main()
{

    float msg,calls,rent=100,Bill,gross,b1m,b1c,tax;

    printf("enter the number of messages sent:");
    scanf("%f",&msg);

    printf("\n\n Enter the no. of calls made:");
    scanf("%f",&calls);

    if(msg<=50)
    {
        b1m=msg/10;
    }
    else
    {
        b1m=msg/4;
    }

    if(calls<=200)
    {
        b1c=calls*3/4;
    }
    else
    {
        b1c=calls*95/100;
    }

    Bill=b1m+b1c+rent;
    if(Bill<=1000)
    {
        tax=Bill/8;
    }
    else
    {
        tax=Bill*225/1000;
    }
    gross=Bill+tax;

    printf("\n\n\t\t\t\t Gross Bill=%f",gross);
    printf("\nThnku fr visiting");
}
*/
}
