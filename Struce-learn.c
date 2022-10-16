
#include<stdio.h>
#include<string.h>
struct HOME
{
	char name[20];//制定类型
	int num;//制定类型
}; //;不可缺
int main()
{
	struct HOME h ={"杨家",2}; //赋值
	/*printf("家族：%s\n",h.name);*/
	//printf("现在成员：%d人\n",h.num);
	//h.num=3;
	strcpy(h.name,"赵家");//strcpy--string copy--库函数需要使用头文件
	printf("家族姓氏：%s\n",h.name);
	printf("明年的成员：%d人\n",h.num);
	//struct HOME* pb=&h;//取地址及制定类型
	//printf("家族：%s\n",h.name);//结构体变量.成员
	//printf("家族：%d\n",h.num);//结构体变量.成员
	//printf("家族：%s\n",(*pb).name);//结构体变量.成员
	//printf("现在成员：%d人\n",pb->num);//结构体指针->成员
	return 0;
}