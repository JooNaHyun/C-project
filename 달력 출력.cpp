#include <stdio.h>

int main() {
    int year, month, dayOfWeek, numDays, day, end;
    while(1){
   
   printf("�⵵�� �Է��ϼ���: ");
    scanf("%d", &year);
    printf("���� �Է��ϼ���: ");
    scanf("%d", &month);

    // �ش� ���� ù ��° ���� ���� ��� (0:�Ͽ���, 1:������, ..., 6:�����)
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
     
   //ù ��° ���� �Ͽ����̶�� �����ϸ�, 
   //1�� 1���� ������ ����� �� dayOfWeek ������ 0�� ����˴ϴ�. 
   //�׷��� ���� ���� ù ��° ���� �̹� ���� ������ ��¥ ������ ���� ���̹Ƿ�, 
   //�̹� ���� �� ��(numDays)�� 1�� ���� ������ ���� ���� ù ��° ���� ����ؾ� �մϴ�.
   //�׷��� dayOfWeek�� ����� �� 1�� ���ؼ�, ���� ���� ù ��° ���� ���� �������� ����մϴ�. 
   //�׷��� dayOfWeek�� 0(�Ͽ���)���� 6(�����)������ ���� ���� �� �ְ� �˴ϴ�.
   //printf("%d\n",dayOfWeek);
   
    // �ش� ���� �� �� ���
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

    // �޷� ���
    printf("====== %d�� %d�� ======\n", year, month);
    printf(" �� �� ȭ �� �� �� �� \n");

    // ���� ���ϱ��� ���� ���
    for (int i = 0; i < dayOfWeek; i++) {
        printf("   ");
    }

    // ��¥ ���
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

   printf("�����Ͻðڽ��ϱ�?(1:��),(2:�ƴϿ�)");
   scanf("%d", &end);
   if(end == 1)
   break;

   
}


    return 0;
}
