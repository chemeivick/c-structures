//c structures for student
#include <stdio.h>
#include<string.h>//strcpy()
struct Student{
	char name[30];
	float height;
	char reg_no[15];
	char email[20];
	int phone;		
}student1,student2;
int main()
{
	//structStudent student1,student2;
	strcpy(student1.name,"victar");
	student1.height=5.7;
	strcpy(student1.reg_no,"CT101/G/21969");
	strcpy(student1.email,"victar@gmail.com");
	student1.phone =23456;
	
	
	printf("name:%s\n",student1.name);
	printf("height:%f\n",student1.height);
	printf("reg_no:%d\n",student1.reg_no);
	printf("email:%s\n",student1.email);
	printf("phone:%d\n",student1.phone);
	
	return 0;
}
