#include <stdio.h>
int main()
{
    int a, b, c, m, mm, mmm;
    
    printf("Ingrese un valor: ");
    scanf("%d",&a);
    printf("Ingrese otro valor: ");
    scanf("%d",&b);
    printf("Ingrese otro valor: ");
    scanf("%d",&c);
    
    if (b<=a && c<=a)
    {
        mmm=a;
        if (c<=b)
        {
            mm=b;
            m=c;
        }
        else
        {
            if (b<=c)
            {
                mm=c;
                m=b;
            }
        }
    }
    else
    {
        if (c<=b && a<=b)
        {
            mmm=b;
            if (c<=a)
            {
                mm=a;
                m=c;
            }
            else
            {
                if (a<=c)
                {
                    mm=c;
                    m=a;
                }
            }
        }
        else
        {
            if (b<=c && a<=c)
            {
                mmm=c;
                if (a<=b)
                {
                    mm=b;
                    m=a;
                }
                else
                {
                    if (b<=a)
                    {
                        mm=a;
                        m=b;
                    }
                }
            }
        }
    }
    printf ("Los numeros ordenados de mayor a menor: %d => %d => %d", mmm, mm, m);
    return 0;
}
