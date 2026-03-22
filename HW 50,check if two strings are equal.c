int main()
{
    int i,l1=0,l2=0,J=0;
 char s[100],r[100];
 printf("enter strings 1,2:");
 gets(s);
 gets(r);
 for(i=0;s[i]!=0;i++)
 {
     l1++;
 }
 for(i=0;r[i]!=0;i++)
 {
     l2++;
 }
 if(l1==l2)
 {
     for(i=0;i<l1;i++)
     {
         if(s[i]!=r[i])
         {
             printf("Strings are not Same");
             J=1;
             break;
         }
     }
     if(J==0)
        printf("Strings are Same");

 }
 else
    printf("Strings are not Same");

}
