int main()
{

    ////All this is WRONG practically. eg 1700 is not a leap year
   /* int days;
    printf("Enter the no. of days in present year:");
    scanf("%d",&days);
    if(days%4==2)
        printf("\n\t\t\t  It's a Leap Year!!!!");
    */
   /* int year;
    printf("Type the year:");
    scanf("%d",&year);
    if(year%4==0)
        printf("\n\t\t\t  It's a Leap Year!!!!");
*/
    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0)||(y%400==0))
        printf("\nIt's a Leap Year");
    else
        printf("\nNot a Leap Year");
}
