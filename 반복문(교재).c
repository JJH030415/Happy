#include <stdio.h>
	//for �ݺ����� ����Ͽ� 1���� ���� ���ϱ�  
//	void main() 
//	{	
//		int sum = 0, num;  
//	
//		for(num = 1; num <= 5; num++) //num���� 1���� 5���� 1�� ����  
//		{
//			printf("num(%d)+sum(%d)=",num,sum); 
//			
//			sum  = num + sum;  // sum���� num�� ����  
//			
//			printf("%d\n",sum);  //�����  
//		}
//		printf("\nResult : num = %d sum = %d\n",num,sum); 
//	}   



	//���� ���� ������ for �ݺ����� ����� 1���� 5���� ���ϱ� 
//	void main() 
//	{ 
//		int sum=0,num=1; 
//	
//		for(;;) //���ѷ����� ����� for �ݺ���  
//		{ 
//			printf("num(%d)+sum(%d)=",num,sum); 
//	
//			sum = sum + num; 
//	
//			printf("%d\n",sum);  
//			num++; //���� ��ȭ ���� 
//			if(num>5) break; // num > 5�� ���̸� �ݺ��� ���� 
//		}
//		printf("\nResult : num = %d sum = %d",num,sum); 
//	}  

	
	
	//while �ݺ����� ����Ͽ� 1���� 5���� ���ϱ� 
//	void main() 
//	{
//		int sum=0,num=1; 
//		while(num<=5) // num ���� 5���� �����ϴµ���  
//		{ 
//		printf("num(%d) + sum(%d) = ",num,sum); 
//	
//		sum = num + sum; 
//	
//		printf("%d\n",sum); 
//	
//		num++; 
//		}  
//		printf("\nResult : num = %d sum = %d",num,sum); 
//	}


	
	//do while �ݺ����� ����Ͽ� 1���� 5���� ���ϱ�   
//	void main() 
//	{
//		int  sum = 0, num = 1; 
//		
//		do
//		{ 
//			printf("num(%d) + sum(%d) = ",sum,num); 
//		
//			sum = sum+num; 
//		
//			printf("%d\n",sum);  
//		
//			num++;  
//		} while(num <= 5); 
//		printf("\nResult: num = %d sum %d\n",num,sum); 
//	}



	//for �ݺ����� ����Ͽ� ������ 2�� ����ϱ� 
//	void main() 
//	{
//		int i; 
//		for(i=1;i<10;i++) // ������ 1���� 9���� �����ϸ� 9�� �ݺ� 
//		{ 
//			printf("2*%d =%d\n",i, i*2); // 2*i �������� ���  
//		}
//	}
	   
	   
	//for �ݺ����� �Լ��� ����Ͽ� ������ 2�� ����ϱ� 
//	void ShowMultiplication() 
//	{
//		int i; 
//		for(i=1;i<10;i++)
//		{
//			printf("2*%d=%d\n",i,2*i);   
//		}
//	}
//	void main() 
//	{ 
//		ShowMultiplication(); 
//	}


	//for�ݺ����� �Լ��� ����Ͽ� ������ 5�� ����ϱ�  
//	void ShowMultiplication(int step) // step�� ���޵� ���ڿ� �ش��ϴ� ���� ����ϴ� �Լ� 
//	{
//		int i ; 
//		for(i=1;i<10;i++) 
//		{
//			printf("%d*%d=%d\n",step,i,step*i); 
//		}
//	}
//	void main() 
//	{
//		ShowMultiplication(5); 
//	}


	
	//for �ݺ����� �Լ��� ����Ͽ� ������ ��ü����ϱ�  
//	void ShowMultiplication(int step)
//	{
//		int i; 
//		for(i=1;i<10;i++) 
//		{
//			printf("%d*%d=%d\n",step,i,step*i); 
//		}
//	}
//	void main()
//	{
//		int m;
//		for(m=1;m<10;m++)
//		{
//		ShowMultiplication(m); 
//		}
//	} 
		 
		 
		 
	// for �ݺ����� ����� ��ø �ݺ��� ���� 
//	void main() 
//	{ 
//		int m,n; 
//		for(m=5; m<7; m++) // 5���� 6���� 2ȸ �ݺ� 
//		{
//			for(n=0; n<3; n++) // 0���� 2���� 3ȸ �ݺ�  
//			{
//			printf("m(%d)--n(%d)\n",m,n); 
//			}
//		}
//	}
	

	//for �ݺ����� ��ø ����ؼ� ������ ��ü ����ϱ� 
//	void main() 
//	{
//		int step,i; 
//		for(step=2;step<10;step++) 
//		{ 
//			for (i=1;i<10;i++)
//			{
//				printf("%d*%d=%d\n",step,i,step*i); 
//			}
//		}	
//	}

	//break���� ����ؼ� �ϳ��� �ݺ��� ���������� 
//	void main() 
//	{
//		int m,n; 
//		for(m=5; m<7; m++) //5���� 6���� 2ȸ �ݺ�  
//		{
//			for(n=0; n<3; n++)  //0���� 2���� 3ȸ �ݺ�  
//			{
//				if(m==5&&n==1)break; //m���� 5�̰� n���� 1�϶� break���� ���� 
//				printf("m(%d)--n(%d)\n",m,n); 
//			}
//		}	
//	} 



	
	//break���� ����Ͽ� �ݺ��� ��� ���������� 
//	void main() 
//	{ 
//		int m,n; 
//		for(m=5; m<7; m++) //5���� 6���� 2ȸ �ݺ� 
//		{
//			for(n=0;n<3;n++) //0���� 2���� 3ȸ �ݺ� 
//			{
//				if(m==5&&n==1)break; //���� for�� break 
//				printf("m(%d)--n(%d)\n",m,n); 
//			} 
//			if(m==5&&n==1)break; //�ٱ��� for �� break 
//		}
//	}
	
	
	
	//continue���� ����ؼ� �ݺ����� ���� �帧 �����ϱ� 
//	void main() 
//	{ 
//		int m; 
//		for(m=5; m<8; m++) //5���� 7���� 3ȸ �ݺ� 
//		{
//			if(m==6) continue; //m����6�̸� ����������� 
//			printf("m(%d)\n",m); 
//		}
//	} 	
