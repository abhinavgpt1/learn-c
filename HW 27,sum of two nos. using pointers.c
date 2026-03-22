int main()
{
   int a, b, *p, *q;

   printf("Enter a & b:");
   scanf("%d%d", &a, &b);

   p = &a;
   q = &b;

   int sum = *p + *q;

   printf("Sum = %d\n", sum);
}
