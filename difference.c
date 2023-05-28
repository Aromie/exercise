#include <stdio.h>

void int_dif(int num1, int num2)
{
    if (num1 > num2 || num1 == num2)   
        printf("%d", num1 - num2);    
    else    
        printf("%d", num2 - num1);   
}

void flo_dif(float num3, float num4)
{
    if (num3 > num4 || num3 == num4)
    {
        printf("%.1f", num3 - num4);
    }
    else 
    {
        printf("%.1f", num4 - num3);
    }
}

int main()
{
	int a;
    int b;
    float c;
    float d;
    a=0;
    b=0;
    c=0.0;
    d=0.0;
    
    scanf("%d", &a);
    scanf("%d\n", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    
    
    printf("%d ",a+b);
    int_dif(a,b);
    printf("\n%.1f ", c+d);
    flo_dif(c,d);    
    
    return 0;
}
