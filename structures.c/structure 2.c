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
strcpy(book.title,"introduction to c programming");
strcpy(book.author,"John smith");
book.publicant_year=2022;
strcpy(book.ISBN,"9780131103627");
book.price=49.99;
//display to the output
printf("title:%s\n",book.title);
printf("author:%s\n",book.author);
printf("publicant_year%d\n",book.publicant_year);
printf("ISBN:%s\n",book.ISBN);
printf("price:%f\n",book.price);
return 0;
}