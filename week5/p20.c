#include <stdio.h>
int main(void)
{
    int a, b, c, d; 
    int num, pay, paid, discount, total_cost;

    printf("입장객 수는?[미취학 초등 성인 노인]");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    num = a + b + c + d;
    pay = b + c + d;

    if (pay < 5) 
    {
        total_cost = 1200*b + 2500*c + 800*d;
    } 
    
    else 
    {
        int left = pay - 4;
        int b_full = b, c_full = c, d_full = d;
        int b_disc = 0, c_disc = 0, d_disc = 0;

        if (b_full >= 4) 
        { 
            b_full = 4; c_full = 0; d_full = 0; 
        }

        else if (b_full + c_full >= 4) 
        {
            c_full = 4 - b_full;
            d_full = 0;
        }

        else 
        {
            d_full = 4 - b_full - c_full;
        }
        
        b_disc = b - b_full;
        c_disc = c - c_full;
        d_disc = d - d_full;

        total_cost = 1200*b_full + 2500*c_full + 800*d_full
                   + (int)(1200*b_disc*0.95 + 2500*c_disc*0.95 + 800*d_disc*0.95 + 0.5);
    }

    printf("총 인원은 %d명이고 입장료는 %d원 입니다. ", num, total_cost);

    return 0;
}