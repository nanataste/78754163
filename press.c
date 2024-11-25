#include <stdio.h>

int main() {
    int choice, price = 0;
    printf("메뉴:\n1. 커피 (300원)\n2. 차 (500원)\n3. 물 (200원)\n");
    printf("선택하세요 (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: price = 300; break;
        case 2: price = 500; break;
        case 3: price = 200; break;
        default: printf("잘못된 선택입니다.\n"); return 0;
    }

    printf("선택한 음료는 %d원입니다. 감사합니다!\n", price);
    return 0;
}
