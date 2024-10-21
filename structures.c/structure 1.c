//structure c for book
#include<stdio.h>
#include <string.h>//strcpy()

struct Book{
char title[30];
char author[30];
int publicant_year;
char ISBN[13];
float price;
}book;
int main()
{

//declaring variables 
//prompt the user to enter variables

printf("enter title :");
scanf("%s",&book.title);

printf("enter author :");
scanf("%s",&book.author);

printf("enter publicant_year :");
scanf("%d",&book.publicant_year);

printf("enterISBN :");
scanf("%s",&book.ISBN);

printf("enter price :");
scanf("%f",&book.price);

//display to the output
printf("title:%s\n",book.title);
printf("author:%s\n",book.author);
printf("publicant_year%d\n",book.publicant_year);
printf("ISBN:%s\n",book.ISBN);
printf("price:%f\n",book.price);

return 0;
}