#include <stdio.h>
//두 수교환  
//void main() 
//{
//	int num1,num2,temp; 
//	
//	printf("두수를 입력하시오:"); 
//	scanf("%d %d",&num1,&num2);  
//	
//	temp = num1; 
//	num1 = num2; 
//	num2 = temp; 
//	printf("교환 된 두수: %d %d",num1,num2); 
//} 


// 자릿수 교환   
//void main() 
//{
//	int num,num1,num2; 
//	
//	printf("두자리 수를 입력하세요: "); 
//	scanf("%d",&num); // num으로 숫자 받기  
//	
//	num1 = num % 10; //1의 자리라서 나머지를 구하기 위해 %사용  
//	num2 = num / 10; //10의 자리라서 몫을 구하기 위해 /사용 
//	
//	printf("10의 자리 수 : %d\n",num2);
//	printf("1의 자리 수 : %d\n",num1);
//} 


//절대값 구하기  
//void main() 
//{
//	int a; 
//	
//	printf("정수를 입력하세요:"); 
//	scanf("%d",&a); 
//	
//	if (a<0) a= -a; 
//	printf("%d",a); 
//}


////while문으로 1부터 10까지 출력 
//void main() 
//{
//	int a = 1; 
//	while(a<11) 
//	{
//	printf("%d\n",a); 
//	a++; 
//	}
//} 


//5개의 정수를 입력받아 평균과 합 구하기  
//void main() 
//{
//	int num[3]; 
//	int i,sum=0; 
//	double avg; //소수점 이하 15자리를 표현해주기 위해 double 사용  
//	
//	for (i=0; i<5; i++) //총 5번 실행  
//	{ 
//		printf("숫자를 입력하세요:"); 
//		scanf("%d",&num[i]);  
//	
//		sum += num[i]; 	//sum값에 더함 num값들을 저장   
//	}	
//	avg = sum / 5.0; // 5로 나누기  
//	printf("합은 %d, 평균은 %1f 입니다.",sum,avg); 
//}   
