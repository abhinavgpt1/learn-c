int main()
{
  void SI(float p,float r,float t);
  float p,r,t;
  printf("Enter p,r,t:");
  scanf("%f%f%f",&p,&r,&t);
    SI(p,r,t);
}
void SI(float pr,float rr,float tr)
{
    float SI =pr*rr*tr/100;
    printf("SI=%f",SI);
}
