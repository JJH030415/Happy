#include <stdio.h>
//조건 수식이 참일 때 단일명령 문장 실행하기  
//void main() 
{ 
	int data = 5;  
	if(data> 3) 
	printf("data는3보다 큰수입니다.\n");  
	printf("작업종료");    
} 
	


조건 수식이 참일때 복합 명령 문장 실행하기  
void main() 
{ 
	int score = 92;  
	char grade;  
	if(score >= 90) 
	{ 
		grade = 'A'; 
		printf("점수는 %d이고 등급은 %c입니다.\n",score,grade); 	
	}
	printf("작업종료\n"); 
}    
	
	

//조건 수식에 따른 if~else~의 단일 명령 문장 실행  
void main() 
{ 
	int data = 5; 
	if(data>3) printf("data는 3보다 큰수입니다.\n"); 
	else printf("data는 3보다 작거나 같은수입니다.\n"); 
	printf("\n작업종료");   
}
	
	
	
//조건 수식에 따른 if~else~의 복합 명령 문장 실행 
void main() 
{
	int score = 92; 
	char grade ; 
	if(score>90) 
	{ 
		grade = 'A'; 
		printf("점수는 %d이고 등급은%c입니다.\n",score,grade);  
	}
	else 
	{
		grade = 'B'; 
		printf("점수는 %d이고 등급은 %c입니다.\n",score,grade); 	
	}
	printf("작업종료");  
} 
	
	

// scanf로 성적과 등급  출력 
void main() 
{ 
	int score; 
	char grade; 
	printf("점수를 입력하세요:"); 
	scanf("%d",&score); 
	if(score>=90) 
	{
		grade ='A'; 
		printf("점수는 %d이괴 등급은 %c입니다.",score,grade); 
	}
	else 
	{
		grade ='B'; 
		printf("점수는 %d이고 등급은 %c입니다.",score,grade);  
	}
} 
	
	
	
//중첩된 if 조건문을 사용해 날짜,월,년도 증가  
void main() 
{ 
	int year= 2022, month = 12, day = 31; 
	day++;  // 일을 하루 증가 
	if(day>31) 
	{
	month++; //월(month)이 12에서 13으로 증가 
	day = 1; //월이 증가되었으므로 1일로 변경  
	}
	if(month>12) 
	{
	year++;  //연도(year)가 2022에서 2023으로 증가  
	month =1; // 연이 증가되었으므로 1월로 변경 
	}
	printf("Date: %d년 %d월 %d일\n",year,month,day); 
}
	
	
	
//중첩된 else if문을 사용해 점수에 따른 등급 지정하기 
void main() 
{ 
	int score = 86; 
	char grade; 

	if(score>=90) grade = 'A'; 
	else if (score>=80) grade = 'B';
	else if (score>=70) grade = 'C';
	else grade = 'F';

	printf("당신의 점수는 %d점이고 등급은 %c입니다.",score,grade); 
} 
