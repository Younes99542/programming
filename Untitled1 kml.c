#include<stdio.h>
#include<math.h>

 main()
{
float a,b,c,delta,s,s1,s2;
    printf("donner respectivement a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        if(b!=0)
        {
            s=-c/b;

        }
        else
        {
            printf("pas de solution");
        }
        printf("%f",&s);
    }
    else
    delta=b*b-4*a*c;
    {
        if(delta==0)
        {
            s=-b/2*a;
        }
        printf("%d",&s);
    

        if(delta>0)
        {
            s1=(-b-sqrt(delta))/2*a;
            s2=(-b+sqrt(delta))/2*a;
        }
        printf("%f%f",&s1,&s2);
        if(delta<0)
        {
            printf("pas de solution dans R");
        }
    

    }


}
