int main()
{
 char word[100];
 printf("enter a word:");
 gets(word);
 int i;
 for(i=0;word[i]!='\0';i++)
 {
     word[i]=word[i]+32;
 }
 printf("\nAltered name = %s",word);
}
