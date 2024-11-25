#include <stdio.h>

int main() {
    int money, itemPrice = 700, change;
    printf("음료 가격은 700원입니다. 금액을 투입하세요: ");
    scanf("%d", &money);

    if (money >= itemPrice) {
        change = money - itemPrice;
        printf("잔돈은 %d원입니다. 감사합니다!\n", change);
    } else {
        printf("금액이 부족합니다. %d원이 더 필요합니다.\n", itemPrice - money);
    }
    return 0;
}
