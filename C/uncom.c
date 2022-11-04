#include <stdio.h>
// data 길이  !
//int GetStringLength(char data[]) { 
//	int count =0;
//	while (data[count]){
//		count++;
//	}
//	return count;
//} 
//
//	void main()   
//{ 
//	int data_length; 
//	char data[5]={'h','a','p','p','y'};  	
//	data_length=GetStringLength(data);
//	printf("%c\n",data[2]);
//	printf("data length=%d",data_length); 
//}
			   


//문자 합치기 !
//	void main() 
//{ 
//	char data[10]= {'A','B','C','D'}; 
//	char result[10]; 
//	strcpy(result,data);    // 대입  
//	strcat(result,"EFG");   // 붙임 
//	printf("%s+EFG=%s\n", data, result);
//}   



//  오름차순정렬   ! 
//	void main()
//{
//	int a,b,temp=0;
//	int i; 
//	int num[10]={1,2,3,4,5,6}; 
//	for(a=0;a<6;a++) 
//	{ 
//	for(b=0;b<6;b++) 
//	{ 
//	if(num[a]<num[b]) 
//	{
//	temp=num[a];
//	num[a]=num[b]; 
//	num[b]=temp;
//	}
//	}
//	}
//	printf("오름차순정렬후: ");
//		
//	for(i = 0; i < 6; i++){
//	printf("%d ",num[i]);
//	} 
//}		


	

// 오름차순 코드 (221014)	 
//void main() 
//	{
//	int a,b,temp; 
//	int num[5]={5,2,3,4,1}; 
	
	// 오름차순 배열 
//	for(a=0;a<5;a++) 
//	{ 
//		for(b=0;b<5;b++) 
//		{ 
//			if (num[a]<num[b]) 
//			{ 
//				temp = num[a]; 
//				num[a] = num[b]; 
//				num[b] = temp;
//			}
//		}
//	}
//	printf("오름차순정렬후"); 
//	for(a=0;a<5;a++) {
//		printf("%d ", num[a]);
//	} 
//}
		
		

// 페곹리얼 만드는 코드  
//	void main() 
//{
//	int num,a; 
//	int result =1; 
//	
//	printf("정수입력:"); 
//	scanf("%d",&num); 
//	
//	for(a=1;a<=num;a++) 
//	{
//		result*= a; 
//	} 
//	printf("%d! = %d \n",num,result); 
//}
  

// 임시변수 
//	void main() 
//{
//	char a,b;
//	int temp = 0;   
//	a = 1; 
//	b = 2; 
//	if(num[a]<num[b]);    
//	{
//	temp = num[a]; 
//	num[a] = num[b]; 
//	num[b] = temp; 
//	}
//	printf("오름차순젇렬입니다") ; 
//}

	

  
  
  
