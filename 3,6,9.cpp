#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("몇 번까지 할까요? ");
    scanf("%d", &n); // 숫자를 입력받음
    for (i = 1; i <= n; i++) { // 1부터 입력받은 숫자까지 반복
        count = 0; // 3, 6, 9의 개수를 저장할 변수
        j = i; // 현재 숫자를 저장할 변수
        while (j > 0) { // 숫자의 각 자리수를 확인
            if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9) { // 3, 6, 9 중 하나인 경우
                count++;
            }
            j /= 10; // 다음 자리수로 이동
        }
        if (count > 0) { // 3, 6, 9가 들어간 경우
            for (j = 0; j < count; j++) { // 짝을 count번 출력
                printf("짝");
            }
            printf("\n");
        } else { // 3, 6, 9가 들어가지 않은 경우 숫자 출력
            printf("%d\n", i);
        }
    }
    return 0;
}
