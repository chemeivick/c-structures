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
	struct Student student1,student2;
	// prompt the user to enter variables
	
	printf("enter your name :");
	scanf("%s",&student1.name);
	
	printf("enter height :");
	scanf("%f",&student1.height);
	
	printf("enter reg_no :");
    scanf("%S",&student1.reg_no);
	
	printf("enter emai :l");
	scanf("%s",&student1.email);

	printf("enter phone :");
	scanf("%d",&student1.phone);
	
	printf("name:%s\n",student1.name);
	printf("height:%f\n",student1.height);
	printf("reg_no:%d\n",student1.reg_no);
	printf("email:%s\n",student1.email);
	printf("phone:%d\n",student1.phone);
	
	return 0;
}
