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
		
		





// 포인터  
//	void main()        //00000000002FE16
//{ 
//	short birthday;
//	short *ptr;
//	ptr=&birthday;
//	printf("birthday 변수의 주소는 %p입니다.\n",ptr); 
//} 

// 포인터  
//	void main()  //00000000FFFFFE1C
//	{
//	short birthday; 
//	short ptr;
//	ptr=&birthday;
//	printf("birthday 변수의 주소는 %p입니다.\n",ptr);
//	}




// 포인터(3)  
//	void main() 
//{
//	int a=20,b=30; 
//	printf("%d\n",add(&a,&b)); 
//}
// 	 int add(int*a,int*b) 
// 	 { 
// 	 return *a+*b;
//	 }	

 //포인터(4) 
//	void main() 
//{
//	int num=10; 
//	int*ptr; 
//	ptr = &num; 
//	
//	printf("num값은 %d\n",num); 
//	printf("num값은 %p\n",num);
//	printf("num주소값은은 %d\n",&num);
//	printf("num주소값값은 %p\n",&num);
//	printf("num주소값값은 %x\n",&num);
//
//
//	printf("ptr값%d\n",ptr); 
//	pritnf("ptr주소값이 가리키는 실제값%d\n",*ptr);
//}

  //포인터(5) 
//	void main()
//{
//	int a,b;  
//	int *p1=&a,*p2=&b;  
//	for(*p1=5;*p1<10;a++)
//	{
//	for(*p2=1;*p2<10;b++) 
//	{
//	printf("%d*%d=%d\n",*p1,*p2,(*p1)*(*p2));	
//	}	
//	printf("\n"); 
//	}
//}

//포인터(6) 
//	void main() 
//{ 
//	short data=3;
//	short*p=&data;
//	short**pp=&p;
//	
//	printf("[Before]data: %d\n",data);
//	*p=4; 
//	printf("[Use *p]data: %d\n",data);
//	**pp=5; 
//	printf("[Use **pp]data: %d\n",data); 
//}
	
	
	
	//포인터(7) 
//		void swap(int **a, int **b)
//{	
//	 
//	int temp=0;
//	temp = *a;  
//	temp=*a;  
//	*a=b; 
//	*b=temp;
//}
//	void main()
//{	
//	int num1=10,num2=20;
// 	int *p1=&num1; 
//	int *p2=&num2; 
//	
//	swap(&p1,&p2); 		
//	printf("num1: %d\nnum2:%d \n",*p1,*p2);
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

	void main() 
{
	int a,b,c; 
	for(a=1;a<10;a++) 
	{
	for(b=1;b<10;b++) 
	{
	for(c=1;3*a-2<=c<3*a+1;c++) 
	{
	printf("%d*%d=%d",a,b,a*b);		
	}
	printf("\n"); 
	}
	printf("\n"); 
	}
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  



