#include <stdio.h>
// data ����  !
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
			   


//���� ��ġ�� !
//	void main() 
//{ 
//	char data[10]= {'A','B','C','D'}; 
//	char result[10]; 
//	strcpy(result,data);    // ����  
//	strcat(result,"EFG");   // ���� 
//	printf("%s+EFG=%s\n", data, result);
//}   



//  ������������   ! 
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
//	printf("��������������: ");
//		
//	for(i = 0; i < 6; i++){
//	printf("%d ",num[i]);
//	} 
//}		


	

// �������� �ڵ� (221014)	 
//void main() 
//	{
//	int a,b,temp; 
//	int num[5]={5,2,3,4,1}; 
	
	// �������� �迭 
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
//	printf("��������������"); 
//	for(a=0;a<5;a++) {
//		printf("%d ", num[a]);
//	} 
//}
		
		





// ������  
//	void main()        //00000000002FE16
//{ 
//	short birthday;
//	short *ptr;
//	ptr=&birthday;
//	printf("birthday ������ �ּҴ� %p�Դϴ�.\n",ptr); 
//} 

// ������  
//	void main()  //00000000FFFFFE1C
//	{
//	short birthday; 
//	short ptr;
//	ptr=&birthday;
//	printf("birthday ������ �ּҴ� %p�Դϴ�.\n",ptr);
//	}




// ������(3)  
//	void main() 
//{
//	int a=20,b=30; 
//	printf("%d\n",add(&a,&b)); 
//}
// 	 int add(int*a,int*b) 
// 	 { 
// 	 return *a+*b;
//	 }	

 //������(4) 
//	void main() 
//{
//	int num=10; 
//	int*ptr; 
//	ptr = &num; 
//	
//	printf("num���� %d\n",num); 
//	printf("num���� %p\n",num);
//	printf("num�ּҰ����� %d\n",&num);
//	printf("num�ּҰ����� %p\n",&num);
//	printf("num�ּҰ����� %x\n",&num);
//
//
//	printf("ptr��%d\n",ptr); 
//	pritnf("ptr�ּҰ��� ����Ű�� ������%d\n",*ptr);
//}

  //������(5) 
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

//������(6) 
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
	
	
	
	//������(7) 
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

 



 // ����� ����� �ڵ�  
//	void main() 
//{
//	int num,a; 
//	int result =1; 
//	
//	printf("�����Է�:"); 
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
//	printf("�������������Դϴ�") ; 
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
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  



