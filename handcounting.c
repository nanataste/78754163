#include <stdio.h>

int main() {
    int money = 1000, coffeePrice = 300, teaPrice = 500, choice;

    printf("현재 소지금: %d원\n", money);
    printf("1. 커피 (300원)\n2. 차 (500원)\n선택하세요 (1-2): ");
    scanf("%d", &choice);

    if (choice == 1 && money >= coffeePrice) {
        money -= coffeePrice;
        printf("커피를 구매했습니다. 남은 소지금: %d원\n", money);
    } else if (choice == 2 && money >= teaPrice) {
        money -= teaPrice;
        printf("차를 구매했습니다. 남은 소지금: %d원\n", money);
    } else {
        printf("금액이 부족하거나 잘못된 선택입니다.\n");
    }

    return 0;
}
