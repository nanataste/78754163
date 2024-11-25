#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    printf("계산기 (예: 3 + 5): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) result = num1 / num2; 
            else { printf("0으로 나눌 수 없습니다.\n"); return 0; }
            break;
        default: printf("잘못된 연산자입니다.\n"); return 0;
    }

    printf("결과: %.2lf\n", result);
    return 0;
}
