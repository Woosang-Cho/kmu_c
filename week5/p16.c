#include <stdio.h>
int main(void)
{
    int y, m, d;

    printf("년 월을 공백으로 구분해 입력하세요: ");
    scanf("%d %d", &y, &m);

    switch(m)
    {
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            {
                d = 29;
                break;
            }
            else 
            {
                d = 28;
                break;
            }

        case 4:
        case 6:
        case 9:
        case 11:
            d = 30;
            break;
        default:
            d = 31;
            break;
    }

    printf("%d년 %d월의 마지막 날은 %d일 입니다.", y, m, d);

    return 0;
    
}