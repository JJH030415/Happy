#include <stdio.h>
//배열의 특정 요소에 값 대입  
void main() 
{ 
	short student[20]; 
	student[1] = 10;  // 배열의 두 번째 요소에 10을 대입
	printf("%d\n", student[1]); 
}
	
	
	
// 초기화 되지 않은 배열의 특정요소 값 출력 
void main() 
{ 
	short student[20]; 
	student[1] == 10; 
	printf("%d %d\n",student[1], student[2]); 
}
	
	
	
반복문 사용으로 배열의 모든 요소를 0으로 초기화  
void main() 
{ 
	short student[20], i; 
	for(i=0;i<20;i++) student[i] = 0;  //student 배열의 모든 요소를 0으로 초기  
	student[1] = 10;  
	printf("%d %d\n", student[1],student[2]); 
} 



//배열 초기화 문법으로 배열의 모든 요소를 0으로 초기화 
void main() 
{ 
	short student[20] = {0,}; //반복문 대신 쉴표 사용으로 배열의 모든 요소를 0 
	student[1] = 10; 			   으로 초기화 
	printf("%d %d\n",student[1], student[2]); 
} 
	
	
	
배열의 각 요소에 저장된 값의 합 
void main() 
{ 
	char data[5] = {1,2,3,4,5}; // data 배열을 1~5 값으로 초기화 
	int result = 0,i;  //합한 값을 저장할 result 변수를 0으로 초기화 
	for( i=0; i<5; i++)  // 배열의 각 요소의 값을 result 변수에 5번 합하는 과정  
	{ 
		result = result + data[i];  
	}
	printf("data 배열의 각 요소의 합은 %d입니다.\n",result); //합한 결과 값 출력 
} 
	
	

//배열에 문자열을 저장하고 출력  
void main() 
{
	char data[] = {'h','a','p','p','y',0}; //char data[] = "happy"와 같은 표현  
	char ment[] = "C programming!"; // [] 안의 숫자 생략 가능  
	 
	printf("%s\n",data); 
	printf("%s\n",ment); 
}
	
	
	
배열에 저장된 문자열의 길이를 구하는 함수만들기 
int GetStringLength(char data[]) 
{ 
	int count = 0; //0이 나올때까지 문자의 개수를 더함  
	
	while(data[count]) count++; 
	
	return count; //문자열의 길이를 반환함  
	} 
void main() 
{ 
	int data_length; // 문자열의 길이를 저장할 변수  
	char data[10] = {'h','a','p','p','y'}; // "happy"문자열을 저 장함 
	data_length = GetStringLength(data); //data변수에 들어있는 문자열의 길이를 구함 
	printf("data length = %d\n" , data_length); 
}
	


#include <string.h> 
//문자열 표준함수를 사용하기 위해 추가 
//strien 함수를 사용하여 문자열 길이 출력하기   //실행안됨  
void main() 
{ 
	int data_length; 
		
	char data[10] = {'h','a','p','p','y'}; 
		
	data_length = strien(data); 
		
	printf("data length =%d\n",data_length); 
}
	
	
	
두 개의 문자열 합치기 
void main()  
{ 
	char data[10] = {'a','b','c'}; //abc 문자열을 저 
	char result[10]; 장//새로운 문자열을 저장할 변수  

	strcpy(result,data); // data에 저장된 문자열을 result로 복사  
	strcat(result,"def");  // result 값의 맨뒤에 def를 덧붙임  
	
	printf("%s + def = %s\n",data,result); 
}  



//1차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기 
void main()
{
	char data[12] = { 0,0,2,0,1,1,0,0,2,1,0,2 }; 
	int i, x, y; 

	for(i=0; i<12; i++)
	{
		x = i % 4 + 1; //열번호를 구함 
		y = i / 4 + 1; // 행번호를 구함  
		printf("%d행 %d열에", y, x); 
		if (data[i] == 1) printf("검은 돌이 놓여 있습니다.\n"); 
		else if (data[i] == 2) printf("흰 돌이 놓여있습니다.\n"); 
		else printf("돌이 놓여있지 않습니다.\n"); 
	}	
}



//2차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기 
void main() 
{
	char data[3][4] = {{0,0,2,0},{1,1,0,0},{2,1,0,2}}; 
	int x,y; 
	
	for(y=0; y<3; y++) 
	{
		for (x=0; x<4; x++) 
		{
			printf("%d행%d열에", y+1, x+1); 
			if(data[y][x] == 1) printf("검은돌이 놓여있습니다.\n"); 
			else if (data[y][x] == 2) printf("흰 돌이 놓여있습니다.\n"); 
			else printf("는 돌이 놓여있지 않습니다.\n"); 
		}
	}
} 
