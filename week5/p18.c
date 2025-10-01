#include <stdio.h>

int main(void)
{
    int x, y, r;

    printf("점(x, y)과 반지름(r)을 입력하세요: ");
    scanf("%d %d %d", &x, &y, &r);

    if (x*x + y+y < r*r)
    {
        printf("1");
    }

    if (x*x + y+y == r*r)
    {
        printf("0");
    }

    if (x*x + y+y > r*r)
    {
        printf("-1");
    }

    return 0;
}