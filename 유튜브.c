#include <stdio.h>
//	void main() 
//{
//	char ch; 
//	int num; 

//	printf("ù��° ���ĺ� ="); 
//	scanf("%c",&ch); 

//	printf("ù��° ���� = "); 
//	scanf("%d",&num); 

//	printf("�Էµ� ���ĺ�:%c \n�Էµ� ����:%d",ch,num);  
//}
 


//	void main() 
//{
//	char mw; 
//	char name[1]; 
//	int age; 
//	printf("����:(��:m ��:w)"); 
//	scanf("%c",&mw);
//	
//	printf("�̸�:"); 
//	scanf("%s",&name);
//	
//	printf("����:"); 
//	scanf("%d",&age); 	
//	
//	printf("����:%c, �̸�:%s, ����:%d",mw,name,age);
//}
   
   
//	void main() 
//{
//	int a,b; 
//	
//	printf("�� ���� �Է��ϼ���.:"); 
//	scanf("%d%d",&a,&b); 
//	
//	printf("�μ��� ��: %d\n",a+b);
//	printf("�μ��� ��: %d\n",a-b);
//	printf("�μ��� ��: %d\n",a*b);
//  printf("�μ��� ������: %d\n",a/b);  
//	printf("�μ��� ���: %f\n", ((float)a + (float)b) /2);



//	void main() 
//{
//	int a = 10; 
//	int b = 10;
//	int c,d; 
//	
//	c = ++a; 
//	d = b++;  
//	printf("a���� ++a�ϸ� %d�̴�.\n",c); 
//	printf("b���� b++�ϸ� %d�̴�.",d); 
//} 


	
//	void main() 
//{ 
//	int num; 
//	
//	printf("�����Է�:"); 
//	scanf("%d",&num); 
//	
//	if(num == 7)  
//		printf("���Դϴ�."); 
//	else 
//		printf("�����Դϴ�."); 
//} 


//	void main() 
//{
//	char name[10]; 
//	int a; 
//	
//	printf("�̸�:"); 
//	scanf("%s",&name); 
//	
//	printf("�̸��� %s�̱���. \n  ������ 1 ,Ʋ���� 0 ",name);
//	scanf("%d",&a); 
//	
//	if(a==1 )
// 		printf("%s��(��) �½��ϴ�.",name); 
//	else 
//		printf("%s��(��) �ƴմϴ�.",name); 	
//} 



//	void main() 
//{
//	int a; 
//	do{
//	printf("���� 1,2,3�߿� �ϳ��� ������."); 
//	scanf("%d",&a); 
//	 
//	if(a<=3){
//	if(a==1) 
//		printf("1�� ����"); 
//	else if(a==2) 
//		printf("2�� ����"); 
//	else if(a==3) 
//		printf("3�� ����"); 
//	}
//	else 
//		printf("�������� �ʴ� ���Դϴ�."); 
//	}while(a<1 || a>3);  
//	printf("����Ǿ����ϴ�.");  
//}


//	void main() 
//{
//	
//	int a; 
//	
//	printf("16������ ���ڸ� ���ѹݺ�\n"); 
//	do {scanf("%d",&a);}  while (a<=10);  
//	
//	printf("10���� ū���� �ԷµǾ����ϴ�."); 
//
//}



//	void main() 
//{
//	int a; 
//	
//	printf("���� �Ծ�����?\n"); 
//	printf("�Ծ����� 1, �������� 2 \n"); 
//	
//	do{
//	scanf("%d", &a); 
//	a = a+1; 
//	}while(a==1); { 
//	printf("ȥ�ڸԾ�����?\n"); 
//	}	
//	printf("����"); 
//}



//	void main() 
//{
//	int menu; 
//	do{
//	
//	printf("�޴��� �����ϼ���\n\n"); 
//	printf("-----�޴���-----\n"); 
//	printf("1.�� \n"); 
//	printf("2.�� \n"); 
//	printf("3.�� \n"); 
//	
//	scanf("%d", &menu);  
//	} while(menu<1 || menu>4); 
//	
//	printf("�޴� %d��(��) �����߽��ϴ�.",menu); 

//	switch(menu){ 
//		case 1: 
//			printf("�޴��� ��, 1000���Դϴ�.");break;
//		case 2: 
//			printf("�޴��� ��, 2000���Դϴ�.");break;
//		case 3: 
//			printf("�޴��� ��, 3000���Դϴ�.");break;
//	}
//}


//	void main() 
//{	
//	int a,more; 
//	do{
//	printf("�ش��׸��� �����ϼ���.\n\n"); 
//	printf("1.�Ա�\n2.���\n3.�۱�\n4.��ȸ\n");  
//	scanf("%d",&a); 
//	
//	switch(a){
//		case 1:
//			printf("�Աݼ���");break;
//		case 2: 
//			printf("��� ����");break; 
//		case 3: 
//			printf("�۱ݼ���");break;
//		case 4:   
//			printf("��ȸ����");break; } 
//		printf("����Ϸ��� [1], ������ [2]");  
//	scanf("%d",&more); 
//	}while(more==1); 
//} 


//	void main() 
//{
//	int a,b,c,sum=0; 
//	printf("ù��° ��:"); 
//	scanf("%d",&b); 
//	printf("������ ��:"); 
//	scanf("%d",&c); 
//	for(a=b;a<=c;a++)
//	{
//		sum= sum+a;
//		}	
//	printf("\n %d���� %d������ ��:[%d]",b,c,sum);
//}



//	void main() 
//{
//	int a,b,c,sum=0; 
//	printf("ù��° ��:");
//	scanf("%d",&b); 
//	printf("������ ��:"); 
//	scanf("%d",&c); 
//	for(a=1;a<=c;a++)
//	{ 
//	if(a%2==1) 
//	sum = sum+a;
// 	}
//	
//	printf("Ȧ������:%d\n",sum);   
//}
	


//	void main() 
//{
//	int a,b,c,d; 
//	d=0; 
//	
//	printf("ù��° ��:");
//	scanf("%d",&b);
//	
//	printf("�ι�° ��:"); 
//	scanf("%d",&c); 
//	
//	for(a=b;a<=c;a++)
//	{
//		if(a%2==1)
//		d=d+1; 
//	}
//	printf("%d����%d������Ȧ���� ����: %d\n",b,c,d); 
//}




//	void main() 
//{	
//	int a,b;
//	
//	printf("����� ����ұ��?:"); 
//	scanf("%d",&a); 
//	for(b=1;b<=9;b++)
//	{
//	printf("%d*%d=%d\n",a,b,a*b);	
//	}
//}


//	void main()
//{ 
//	int a,b; 
//	for(a=1;a<10;a++) 
//	{
//	for(b=1;b<10;b++) 
//	{
//	printf("%d*%d=%d\n",a,b,a*b); 	
//	}
//	printf("\n");  
//	}
//}


//	void main() 
//{
//	int a,b; 
//	for(a=1;a<4;a++) 
//	{
//	for(b=1;b<=a;b++) 
//	{
//	printf("*"); 
//	}
//	printf("\n");
//	}
//}



//	void main() 
//{
//	int a,b; 
//	for(a=4;a>0;a--) 
//	{
//	for(b=1;b<=a;b++)
//	{
//	printf("*");
//	}
//	printf("\n"); 
//	}
//}


















