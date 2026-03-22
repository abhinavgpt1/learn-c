int main()
{
    float A,B,C,D;
    printf("Enter any four no.s A,B,C,D:");
    scanf("%f%f%f%f",&A,&B,&C,&D);
    float max=(A>B&&A>C&&A>D?A:B>A&&B>C&&B>D?B:C>A&&C>B&&C>D?C:D);
    printf("\n Greatest among them = %f",max);
}
