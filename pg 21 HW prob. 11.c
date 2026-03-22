int main()
{
    float r,ar,v,h;
    printf("Enter the radius of base:");
    scanf("%f",&r);
    if(r<10)
    {
        ar=3.14*r*r;
        printf("\nArea of base circle=%f",ar);

    }
    else
        {
            printf("\nEnter the height of cylinder:");
            scanf("%f",&h);
            v=3.14*r*r*h;
            printf("\n\nVolume of cylinder=%f",v);
        }
    }
