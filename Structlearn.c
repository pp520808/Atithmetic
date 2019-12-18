#include <stdio.h>
#include "Structlearn.h"

struct my_struct_1
{
	char a;     //1
	double b;   //之前补7 +8     8/8==1
};
 
#pragma pack(4)
struct my_struct_2
{
	char a;    //1
	double b;  //3+8
	int c;     //4     16/4=4
};
#pragma pack()
 
#pragma pack(2)
struct my_struct_3
{
	char a;    //1
	double b;  //1+8
	int c;     //4     14/2
};
#pragma pack()
 
#pragma pack(4)
struct my_struct_4
{
	char a[5];  //5
	double b;   //3+8   16/4
};
#pragma pack()
 
#pragma pack(2)
struct my_struct_5
{
	char a[5];  //5
	double b;   //1+8   14/2
};
#pragma pack()
 
#pragma pack(4)
struct my_struct_6
{
	char a;    //1
	char b[3]; //3
	char c;    //1   1+3+1
};
#pragma pack()
 
#pragma pack(4)
struct my_struct_7
{
	char a;    //1
	char b[3]; //3
	char c;    //1   
	int d;     //补齐 3 +4 
};
#pragma pack()
 
#pragma pack(4)
struct test
{
char x1;   //1
short x2;  //补齐1+ 2
float x3;  //4
char x4;   //1 补齐+3  
};
#pragma pack()

void ShowSizeof()
{
    printf("char: %d\n",sizeof(char));
    printf("short: %d\n",sizeof(short));
    printf("int: %d\n",sizeof(int));
    printf("float: %d\n",sizeof(float));
    printf("double: %d\n",sizeof(double));
    printf("long double: %d\n",sizeof(long double));

    printf("my_struct_1->lenth:%d\n",sizeof(struct my_struct_1));
    printf("my_struct_2->lenth:%d\n",sizeof(struct my_struct_2));
    printf("my_struct_3->lenth:%d\n",sizeof(struct my_struct_3));
    printf("my_struct_4->lenth:%d\n",sizeof(struct my_struct_4));
    printf("my_struct_5->lenth:%d\n",sizeof(struct my_struct_5));
    printf("my_struct_6->lenth:%d\n",sizeof(struct my_struct_6));
    printf("my_struct_7->lenth:%d\n",sizeof(struct my_struct_7));
 
}