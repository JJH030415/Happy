#include <stdio.h>
//	void main() 
//{
//	char ch; 
//	int num; 

//	printf("첫번째 알파벳 ="); 
//	scanf("%c",&ch); 

//	printf("첫번째 숫자 = "); 
//	scanf("%d",&num); 

//	printf("입력된 알파벳:%c \n입력된 숫자:%d",ch,num);  
//}
 


//	void main() 
//{
//	char mw; 
//	char name[1]; 
//	int age; 
//	printf("성별:(남:m 여:w)"); 
//	scanf("%c",&mw);
//	
//	printf("이름:"); 
//	scanf("%s",&name);
//	
//	printf("나이:"); 
//	scanf("%d",&age); 	
//	
//	printf("성별:%c, 이름:%s, 나이:%d",mw,name,age);
//}
   
   
//	void main() 
//{
//	int a,b; 
//	
//	printf("두 수를 입력하세요.:"); 
//	scanf("%d%d",&a,&b); 
//	
//	printf("두수의 합: %d\n",a+b);
//	printf("두수의 차: %d\n",a-b);
//	printf("두수의 곱: %d\n",a*b);
//  printf("두수의 나눗셈: %d\n",a/b);  
//	printf("두수의 평균: %f\n", ((float)a + (float)b) /2);



//	void main() 
//{
//	int a = 10; 
//	int b = 10;
//	int c,d; 
//	
//	c = ++a; 
//	d = b++;  
//	printf("a값을 ++a하면 %d이다.\n",c); 
//	printf("b값을 b++하면 %d이다.",d); 
//} 


	
//	void main() 
//{ 
//	int num; 
//	
//	printf("숫자입력:"); 
//	scanf("%d",&num); 
//	
//	if(num == 7)  
//		printf("참입니다."); 
//	else 
//		printf("거짓입니다."); 
//} 


//	void main() 
//{
//	char name[10]; 
//	int a; 
//	
//	printf("이름:"); 
//	scanf("%s",&name); 
//	
//	printf("이름이 %s이군요. \n  맞으면 1 ,틀리면 0 ",name);
//	scanf("%d",&a); 
//	
//	if(a==1 )
// 		printf("%s이(가) 맞습니다.",name); 
//	else 
//		printf("%s이(가) 아닙니다.",name); 	
//} 



//	void main() 
//{
//	int a; 
//	do{
//	printf("숫자 1,2,3중에 하나를 고르세요."); 
//	scanf("%d",&a); 
//	 
//	if(a<=3){
//	if(a==1) 
//		printf("1을 선택"); 
//	else if(a==2) 
//		printf("2를 선택"); 
//	else if(a==3) 
//		printf("3을 선택"); 
//	}
//	else 
//		printf("존재하지 않는 값입니다."); 
//	}while(a<1 || a>3);  
//	printf("종료되었습니다.");  
//}


//	void main() 
//{
//	
//	int a; 
//	
//	printf("16이하의 숫자면 무한반복\n"); 
//	do {scanf("%d",&a);}  while (a<=10);  
//	
//	printf("10보다 큰수가 입력되었습니다."); 
//
//}



//	void main() 
//{
//	int a; 
//	
//	printf("밥을 먹었나요?\n"); 
//	printf("먹었으면 1, 굶었으면 2 \n"); 
//	
//	do{
//	scanf("%d", &a); 
//	a = a+1; 
//	}while(a==1); { 
//	printf("혼자먹었나요?\n"); 
//	}	
//	printf("종료"); 
//}



//	void main() 
//{
//	int menu; 
//	do{
//	
//	printf("메뉴를 선택하세요\n\n"); 
//	printf("-----메뉴판-----\n"); 
//	printf("1.밥 \n"); 
//	printf("2.빵 \n"); 
//	printf("3.면 \n"); 
//	
//	scanf("%d", &menu);  
//	} while(menu<1 || menu>4); 
//	
//	printf("메뉴 %d를(을) 선택했습니다.",menu); 

//	switch(menu){ 
//		case 1: 
//			printf("메뉴는 밥, 1000원입니다.");break;
//		case 2: 
//			printf("메뉴는 빵, 2000원입니다.");break;
//		case 3: 
//			printf("메뉴는 면, 3000원입니다.");break;
//	}
//}


//	void main() 
//{	
//	int a,more; 
//	do{
//	printf("해당항목을 선택하세요.\n\n"); 
//	printf("1.입금\n2.출금\n3.송금\n4.조회\n");  
//	scanf("%d",&a); 
//	
//	switch(a){
//		case 1:
//			printf("입금선택");break;
//		case 2: 
//			printf("출금 선택");break; 
//		case 3: 
//			printf("송금선택");break;
//		case 4:   
//			printf("조회선택");break; } 
//		printf("계속하려면 [1], 중지는 [2]");  
//	scanf("%d",&more); 
//	}while(more==1); 
//} 


//	void main() 
//{
//	int a,b,c,sum=0; 
//	printf("첫번째 수:"); 
//	scanf("%d",&b); 
//	printf("마지막 수:"); 
//	scanf("%d",&c); 
//	for(a=b;a<=c;a++)
//	{
//		sum= sum+a;
//		}	
//	printf("\n %d부터 %d까지의 합:[%d]",b,c,sum);
//}



//	void main() 
//{
//	int a,b,c,sum=0; 
//	printf("첫번째 수:");
//	scanf("%d",&b); 
//	printf("마지막 수:"); 
//	scanf("%d",&c); 
//	for(a=1;a<=c;a++)
//	{ 
//	if(a%2==1) 
//	sum = sum+a;
// 	}
//	
//	printf("홀수의합:%d\n",sum);   
//}
	


//	void main() 
//{
//	int a,b,c,d; 
//	d=0; 
//	
//	printf("첫번째 수:");
//	scanf("%d",&b);
//	
//	printf("두번째 수:"); 
//	scanf("%d",&c); 
//	
//	for(a=b;a<=c;a++)
//	{
//		if(a%2==1)
//		d=d+1; 
//	}
//	printf("%d에서%d까지의홀수의 갯수: %d\n",b,c,d); 
//}




//	void main() 
//{	
//	int a,b;
//	
//	printf("몇단을 출력할까요?:"); 
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


















