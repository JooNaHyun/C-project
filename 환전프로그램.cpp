#include<stdio.h>
#include<math.h>
int main()
{
	int won;
	int money;
	int dollar;
	int yen;
	int euro;
	int yuan;
	int pound;
   
    float USD;
    float JPY;
    float EUR;
    float CNY;
    float GBP;
   
    int exchange1;
    
    printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
    scanf("%d", &won);
   
    printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ",money);
    scanf("%d", &money);
   
    USD = 1320.23;
    JPY = 946.87;
    EUR = 1370.68;
    CNY = 189.20;
    GBP = 1536.58;
   
   dollar= won/USD;
   yen = won/JPY;
   euro = won/EUR;
   yuan = won/CNY;
   pound = won/GBP;
   
   if (money == 1)
   {
    printf("���� ȯ�� : %.2f\n", USD);
      printf("ȯ�����\n");
      printf("�޷� : %d�޷�\n", dollar);

      exchange1 = 10 * (floor((won-(dollar*USD))*0.1));
      printf("�Ž����� : %d��\n",exchange1); 
      
      int thousand = (floor(exchange1 * 0.001));
      
      int fivehundred =(exchange1 - (thousand * 1000));
      if(fivehundred >= 500 ){
         fivehundred = 1;
      }else{
         fivehundred = 0;
      }
      
      int hundred =(floor(exchange1 - ((thousand*1000)+(fivehundred*500)))*0.01);
      int ten = (floor(exchange1 - ((thousand*1000)+(fivehundred*500)+(hundred*100)))*0.1);
      
      printf("õ���� : %d��\n",thousand);
      printf("����� : %d��\n",fivehundred);
      printf("��� : %d��\n", hundred);
      printf("�ʿ� : %d��\n",ten);

}
   if(money == 2)
   {
      printf("���� ȯ�� : %.2f\n",JPY);
      printf("ȯ�����\n");
      printf("�޷� : %d��\n", yen);
      exchange1 = 10 * (floor((won-(yen*JPY))*0.1));
      printf("�Ž����� : %d��\n", exchange1);
      
      int thousand = (floor(exchange1 * 0.001));
      int fivehundred =(exchange1 - (thousand * 1000));
      if(fivehundred >= 500 )
	  {
         fivehundred = 1;
      }
	  else
	  {
         fivehundred = 0;
      }
      int hundred =(floor(exchange1 - ((thousand*1000)+(fivehundred*500)))*0.01);
      int ten = (floor(exchange1 - ((thousand*1000)+(fivehundred*500)+(hundred*100)))*0.1);
      
      printf("õ���� : %d��\n",thousand);
      printf("����� : %d��\n",fivehundred);
      printf("��� : %d��\n", hundred);
      printf("�ʿ� : %d��\n",ten);
   }
   
   if(money == 3)
   
   {
      printf("���� ȯ�� : %.2f\n",EUR);
      printf("ȯ�����\n");
      printf("�޷� : %d����\n", euro);
      exchange1 =10 * (floor((won-(euro*EUR))*0.1));
      printf("�Ž����� : %d��\n", exchange1); 
      
      int thousand = (floor(exchange1 * 0.001));
      int fivehundred =(exchange1 - (thousand * 1000));
      if(fivehundred >= 500)
	  {
         fivehundred = 1;
      }
	  else
	  {
         fivehundred = 0;
      }
      int hundred =(floor(exchange1 - ((thousand*1000)+(fivehundred*500)))*0.01);
      int ten = (floor(exchange1 - ((thousand*1000)+(fivehundred*500)+(hundred*100)))*0.1);
      
      printf("õ���� : %d��\n",thousand);
      printf("����� : %d��\n",fivehundred);
      printf("��� : %d��\n", hundred);
      printf("�ʿ� : %d��\n",ten);
   }
   
   if(money == 4)
   {
      printf("���� ȯ�� : %.2f\n",CNY);
      printf("ȯ�����\n");
      printf("�޷� : %d����\n", yuan);
      exchange1 =10 * (floor((won-(yuan*CNY))*0.1));
      printf("�Ž����� : %d��\n", exchange1);
      
      int thousand = (floor(exchange1 * 0.001));
      int fivehundred =(exchange1 - (thousand * 1000));
      if(fivehundred >= 500 )
	  {
         fivehundred = 1;
      }
	  else
	  {
         fivehundred = 0;
      }
      int hundred =(floor(exchange1 - ((thousand*1000)+(fivehundred*500)))*0.01);
      int ten = (floor(exchange1 - ((thousand*1000)+(fivehundred*500)+(hundred*100)))*0.1);
      
      printf("õ���� : %d��\n",thousand);
      printf("����� : %d��\n",fivehundred);
      printf("��� : %d��\n", hundred);
      printf("�ʿ� : %d��\n",ten);
   }
   
   if(money == 5)
   {
      printf("���� ȯ�� : %.2f\n",GBP);
      printf("ȯ�����\n");
      printf("�޷� : %d�Ŀ��\n", pound);
      exchange1 =10 * (floor((won-(pound*GBP))*0.1));
      printf("�Ž����� : %d��\n", exchange1);
    
      int thousand = (floor(exchange1 * 0.001));
      int fivehundred =(exchange1 - (thousand * 1000));
      if(fivehundred >= 500 )
	  {
         fivehundred = 1;
      }
	  else
	  {
         fivehundred = 0;
      }
      int hundred =(floor(exchange1 - ((thousand*1000)+(fivehundred*500)))*0.01);
      int ten = (floor(exchange1 - ((thousand*1000)+(fivehundred*500)+(hundred*100)))*0.1);
      
      printf("õ���� : %d��\n",thousand);
      printf("����� : %d��\n",fivehundred);
      printf("��� : %d��\n", hundred);
      printf("�ʿ� : %d��\n",ten); 
   }

   return 0; 
	}	

