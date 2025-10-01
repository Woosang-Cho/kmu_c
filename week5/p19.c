#include <stdio.h>
int main(void)
{   
    int a, b, c, temp;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) { temp = a; a = b; b = temp; }
    if (b < c) { temp = b; b = c; c = temp; }
    if (a < b) { temp = a; a = b; b = temp; }

    if (c == 0) 
    { 
        printf("%d", 100*(a-b) +10*b + (c-a));
    }
    else 
    {
        printf("%d", 99*(a-c));
    }

    return 0;
}