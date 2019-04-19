#include<stdio.h>
#include<stdlib.h>

void deal_exchange(int,int,int[]); 
int main(void)
{
	int customer_number; 
	int exchange_number;

	
	printf("請輸入顧客數量");	
	scanf("%d",&customer_number);
		
	int customer_array[customer_number]={0}; 
		
	printf("請輸入幾筆交易");
	scanf("%d",&exchange_number);
	
	deal_exchange(customer_number,exchange_number,customer_array);
	
	return 0;
	system("pause");
} 
 
void deal_exchange(int customer_number,int exchange_number,int customer_array[])
{
	
	int i,mode; 
	int customer,exchange;
	
	printf("開始交易");
	printf("交易格式:&customer,&mode,&exchange\n");

	for(i=0;i<exchange_number;i++) 
	{
		printf("第%d筆交易\n",i);
		scanf(" %d%d%d",&customer,&mode,&exchange);
			
		switch(mode){
		case 0:
			customer_array[customer]+=exchange;
			break;
		case 1: 
			customer_array[customer]-=exchange;
			break;
		}
		
		if(customer_array[customer]<0)
		{
			printf("%d號存款不足,再輸入一次\n",i);
			i-=1;
		}
		
	}
	printf("result:\n");
	
	for(i=0;i<customer_number;i++){
		printf("%d號顧客:%d\n",i,customer_array[i]);
	} 
		
	
}
