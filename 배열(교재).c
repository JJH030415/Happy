#include <stdio.h>
	//�迭�� Ư�� ��ҿ� �� ����  
//	void main() 
//  { 
//	short student[20]; 
//	student[1] = 10;  // �迭�� �� ��° ��ҿ� 10�� ����
//	printf("%d\n", student[1]); 
//	}
	
	
	// �ʱ�ȭ ���� ���� �迭�� Ư����� �� ��� 
//	void main() 
//	{ 
//	short student[20]; 
//	student[1] == 10; 
//	printf("%d %d\n",student[1], student[2]); 
//	}
	
	
	//�ݺ��� ������� �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ  
//	void main() 
//	{ 
//	short student[20], i; 
//	for(i=0;i<20;i++) student[i] = 0;  //student �迭�� ��� ��Ҹ� 0���� �ʱ�  
//	student[1] = 10;  
//	printf("%d %d\n", student[1],student[2]); 
//	} 


	//�迭 �ʱ�ȭ �������� �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ 
//	void main() 
//	{ 
//	short student[20] = {0,}; //�ݺ��� ��� ��ǥ ������� �迭�� ��� ��Ҹ� 0 
//	student[1] = 10; 			   ���� �ʱ�ȭ 
//	printf("%d %d\n",student[1], student[2]); 
//	} 
	
	
	// �迭�� �� ��ҿ� ����� ���� �� 
//	void main() 
//	{ 
//	char data[5] = {1,2,3,4,5}; // data �迭�� 1~5 ������ �ʱ�ȭ 
//	int result = 0,i;  //���� ���� ������ result ������ 0���� �ʱ�ȭ 
//	for( i=0; i<5; i++)  // �迭�� �� ����� ���� result ������ 5�� ���ϴ� ����  
//	{ 
//	result = result + data[i];  
//	}
//	printf("data �迭�� �� ����� ���� %d�Դϴ�.\n",result); //���� ��� �� ��� 
//	} 
	
	
	//�迭�� ���ڿ��� �����ϰ� ���  
//	void main() 
//	{
//	char data[] = {'h','a','p','p','y',0}; //char data[] = "happy"�� ���� ǥ��  
//	char ment[] = "C programming!"; // [] ���� ���� ���� ����  
//	 
//	printf("%s\n",data); 
//	printf("%s\n",ment); 
//	}
	
	
	//�迭�� ����� ���ڿ��� ���̸� ���ϴ� �Լ������ 
//	int GetStringLength(char data[]) 
//	{ 
//	int count = 0; //0�� ���ö����� ������ ������ ����  
//	
//	while(data[count]) count++; 
//	
//	return count; //���ڿ��� ���̸� ��ȯ��  
//	} 
//	
//	void main() 
//	{ 
//	int data_length; // ���ڿ��� ���̸� ������ ����  
//	char data[10] = {'h','a','p','p','y'}; // "happy"���ڿ��� �� ���� 
//	data_length = GetStringLength(data); //data������ ����ִ� ���ڿ��� ���̸� ���� 
//	printf("data length = %d\n" , data_length); 
//	}
	
	#include <string.h> //���ڿ� ǥ���Լ��� ����ϱ� ���� �߰� 
	//strien �Լ��� ����Ͽ� ���ڿ� ���� ����ϱ�   ����ȵ�  
//	void main() 
//	{ 
//		int data_length; 
//		
//		char data[10] = {'h','a','p','p','y'}; 
//		
//		data_length = strien(data); 
//		
//		printf("data length =%d\n",data_length); 
//	}
	
	
	//�� ���� ���ڿ� ��ġ�� 
//	void main()  
//	{ 
//	char data[10] = {'a','b','c'}; //abc ���ڿ��� �� 
//	char result[10]; ��//���ο� ���ڿ��� ������ ����  
//	
//	strcpy(result,data); // data�� ����� ���ڿ��� result�� ����  
//	strcat(result,"def");  // result ���� �ǵڿ� def�� ������  
//	
//	printf("%s + def = %s\n",data,result); 
//	}  

