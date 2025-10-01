#include <stdio.h>
int main(void)
{
    int a, b, c;
    int abs_a, abs_b, abs_c;
    int max, min;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    abs_a = (a < 0) ? -a : a; 
    abs_b = (b < 0) ? -b : b; 
    abs_c = (c < 0) ? -c : c; 

    
    max = a;
    if (abs_b > abs_a) 
    { 
        max = b; 
    } 
    if (abs_c > ((max == a) ? abs_a : abs_b)) 
    { 
        max = c; 
    } 

    
    min = a;
    if (abs_b < abs_a) 
    { 
        min = b; 
    } 
    if (abs_c < ((min == a) ? abs_a : abs_b)) 
    { 
        min = c; 
    } 

    printf("%d %d\n", max, min);

    return 0;
}