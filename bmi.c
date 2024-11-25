#include <stdio.h>

int main() {
    double weight, height, bmi;
    printf("몸무게(kg)와 키(m)를 입력하세요 (예: 70 1.75): ");
    scanf("%lf %lf", &weight, &height);

    bmi = weight / (height * height);
    printf("당신의 BMI는 %.2lf입니다. ", bmi);

    if (bmi < 18.5) printf("저체중입니다.\n");
    else if (bmi < 25) printf("정상 체중입니다.\n");
    else if (bmi < 30) printf("과체중입니다.\n");
    else printf("비만입니다.\n");

    return 0;
}
