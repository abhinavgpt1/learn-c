int main()
{
 char word[100];
 printf("enter a word:");
 gets(word);
 int i;
 for(i=0;word[i]!='\0';i++)
 {
     if(word[i]>='A'&&word[i]<='Z')
        word[i]=word[i]+32;
     else
        if(word[i]>='a'&&word<='z')
            word[i]=word[i]-32;

 }
 puts(word);///////or printf("\nAltered name = %s",word);
}
