#include <stdio.h>
//for 반복문을 사용하여 1부터 까지 더하기  
void main() 
{	
	int sum = 0, num;  
	
	for(num = 1; num <= 5; num++) //num값이 1부터 5까지 1씩 증가  
	{
	printf("num(%d)+sum(%d)=",num,sum); 
			
	sum  = num + sum;  // sum값에 num을 더함  
			
	printf("%d\n",sum);  //결과값  
	}
	printf("\nResult : num = %d sum = %d\n",num,sum); 
}   



// 무한 루프 형식의 for 반복문을 사용해 1부터 5까지 더하기 
//void main() 
{ 
	int sum=0,num=1; 
	
	for(;;) //무한루프를 만드는 for 반복문  
	{ 
	printf("num(%d)+sum(%d)=",num,sum); 
	
	sum = sum + num; 
	
	printf("%d\n",sum);  
	num++; //조건 변화 수식 
	if(num>5) break; // num > 5가 참이면 반복문 종료 
	}
	printf("\nResult : num = %d sum = %d",num,sum); 
}  

	
	
while 반복문을 사용하여 1부터 5까지 더하기 
void main() 
{
	int sum=0,num=1; 
	while(num<=5) // num 값이 5까지 증가하는동안  
	{ 
	printf("num(%d) + sum(%d) = ",num,sum); 
	
	sum = num + sum; 
	
	printf("%d\n",sum); 
	
	num++; 
	}  
	printf("\nResult : num = %d sum = %d",num,sum); 
//}


	
//do while 반복문을 사용하여 1부터 5까지 더하기   
void main() 
{
	int  sum = 0, num = 1; 
		
	do
	{ 
		printf("num(%d) + sum(%d) = ",sum,num); 
		sum = sum+num; 
		printf("%d\n",sum);  
		
			num++;  
		} while(num <= 5); 
		printf("\nResult: num = %d sum %d\n",num,sum); 
	}



//for 반복문을 사용하여 구구단 2단 출력하기 
void main() 
{
	int i; 
	for(i=1;i<10;i++) // 변수가 1부터 9까지 증가하며 9번 반복 
	{ 
	printf("2*%d =%d\n",i, i*2); // 2*i 형식으로 출력  
	}
}
	   
	   
//for 반복문과 함수를 사용하여 구구단 2단 출력하기 
void ShowMultiplication() 
{
	int i; 
	for(i=1;i<10;i++)
	{
	printf("2*%d=%d\n",i,2*i);   
	}
}
void main() 
{ 
	ShowMultiplication(); 
}


//for반복문과 함수를 사용하여 구구단 5단 출력하기  
void ShowMultiplication(int step) // step에 전달된 숫자에 해당하는 단을 출력하는 함수 
{
	int i ; 
	for(i=1;i<10;i++) 
	{
	printf("%d*%d=%d\n",step,i,step*i); 
	}
	}
void main() 
{
	ShowMultiplication(5); 
}


	
//for 반복문과 함수를 사용하여 구구단 전체출력하기  
void ShowMultiplication(int step)
{
	int i; 
	for(i=1;i<10;i++) 
	{
	printf("%d*%d=%d\n",step,i,step*i); 
	}
	}
void main()
{
	int m;
	for(m=1;m<10;m++)
	{
	ShowMultiplication(m); 
	}
} 
		 
		 
		 
// for 반복문을 사용한 중첩 반복문 예제 
void main() 
{ 
	int m,n; 
	for(m=5; m<7; m++) // 5부터 6까지 2회 반복 
	{
		for(n=0; n<3; n++) // 0부터 2까지 3회 반복  
		{
		printf("m(%d)--n(%d)\n",m,n); 
		}
	}
}
	

//for 반복문을 중첩 사용해서 구구단 전체 출력하기 
void main() 
{
	int step,i; 
	for(step=2;step<10;step++) 
	{ 
		for (i=1;i<10;i++)
		{
		printf("%d*%d=%d\n",step,i,step*i); 
		}
	}	
}

//break문을 사용해서 하나의 반복문 빠져나오기 
void main() 
{
	int m,n; 
	for(m=5; m<7; m++) //5부터 6까지 2회 반복  
	{
		for(n=0; n<3; n++)  //0부터 2까지 3회 반복  
		{
			if(m==5&&n==1)break; //m값이 5이고 n값이 1일때 break문을 수행 
			printf("m(%d)--n(%d)\n",m,n); 
		}
	}	
} 



	
//break문을 사용하여 반복문 모두 빠져나오기 
void main() 
{ 
	int m,n; 
	for(m=5; m<7; m++) //5부터 6까지 2회 반복 
	{
	for(n=0;n<3;n++) //0부터 2까지 3회 반복 
	{
	if(m==5&&n==1)break; //안쪽 for문 break 
	printf("m(%d)--n(%d)\n",m,n); 
	} 
	if(m==5&&n==1)break; //바깥쪽 for 문 break 
	}
}
	
	
	
//continue문을 사용해서 반복문의 실행 흐름 변경하기 
void main() 
{ 
	int m; 
	for(m=5; m<8; m++) //5부터 7까지 3회 반복 
	{
	if(m==6) continue; //m값이6이면 출력하지않음 
	printf("m(%d)\n",m); 
	}
} 	 
