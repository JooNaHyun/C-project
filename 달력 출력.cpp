#include <stdio.h>

int main() {
    int year, month, dayOfWeek, numDays, day, end;
    while(1){
   
   printf("년도를 입력하세요: ");
    scanf("%d", &year);
    printf("월을 입력하세요: ");
    scanf("%d", &month);

    // 해당 월의 첫 번째 날의 요일 계산 (0:일요일, 1:월요일, ..., 6:토요일)
    dayOfWeek = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    for (int i = 1; i < month; i++) {
        if (i == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                dayOfWeek += 29;
            } else {
                dayOfWeek += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            dayOfWeek += 30;
        } else {
            dayOfWeek += 31;
        }
    }
    dayOfWeek = (dayOfWeek + 1) % 7;
     
   //첫 번째 날이 일요일이라고 가정하면, 
   //1월 1일의 요일을 계산할 때 dayOfWeek 변수에 0이 저장됩니다. 
   //그러나 다음 달의 첫 번째 날은 이번 달의 마지막 날짜 다음에 오는 날이므로, 
   //이번 달의 일 수(numDays)에 1을 더한 값부터 다음 달의 첫 번째 날을 출력해야 합니다.
   //그래서 dayOfWeek를 계산할 때 1을 더해서, 다음 달의 첫 번째 날이 무슨 요일인지 계산합니다. 
   //그러면 dayOfWeek가 0(일요일)부터 6(토요일)까지의 값을 가질 수 있게 됩니다.
   //printf("%d\n",dayOfWeek);
   
    // 해당 월의 일 수 계산
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            numDays = 29;
        } else {
            numDays = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        numDays = 30;
    } else {
        numDays = 31;
    }

    // 달력 출력
    printf("====== %d년 %d월 ======\n", year, month);
    printf(" 일 월 화 수 목 금 토 \n");

    // 시작 요일까지 공백 출력
    for (int i = 0; i < dayOfWeek; i++) {
        printf("   ");
    }

    // 날짜 출력
    for (day = 1; day <= numDays; day++) {
        printf("%3d", day);
        if (++dayOfWeek > 6) {
            printf("\n");
            dayOfWeek = 0;
        }
    }
    if (dayOfWeek != 0) {
        printf("\n");
    }

   printf("종료하시겠습니까?(1:예),(2:아니요)");
   scanf("%d", &end);
   if(end == 1)
   break;

   
}


    return 0;
}
