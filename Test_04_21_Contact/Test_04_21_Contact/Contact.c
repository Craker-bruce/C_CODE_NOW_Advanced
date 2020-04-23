#include "Contact.h"

//初始化
void InitContact(Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;
}
//添加函数
void AddPeople(Contact* pc)
{
	printf("请输入要添加的人的信息:>\n");
	printf("姓名  性别  年龄  电话  地址\n");
	/*printf("姓名:>");
	scanf("%s", pc->data[pc->size].name);
	printf("性别:>");
	scanf("%s", pc->data[pc->size].sex);
	printf("年龄:>");
	scanf("%d", &(pc->data[pc->size].age));
	printf("电话:>");
	scanf("%s", pc->data[pc->size].tel);
	printf("地址:>");
	scanf("%s", pc->data[pc->size].addr);
	printf("添加成功.\n");*/

	scanf("%s%s%d%s%s",
		pc->data[pc->size].name,
		pc->data[pc->size].sex,
		&(pc->data[pc->size].age),
		pc->data[pc->size].tel,
		pc->data[pc->size].addr);
	printf("添加成功.\n");
	pc->size++;
	//printf("%s %s %d %s %s", pc->data[size].name);
}
//显示
void ShowPeople(Contact* pc)
{
	printf("*************************************************\n");
	printf("%-10s%-8s%-8s%-14s%-30s\n", "姓名", "性别", "年龄", "电话", "住址");
	//printf("%s", pc->data[pc->size].name);
	for (size_t i = 0; i < pc->size; ++i)
	{
		printf("%-10s%-8s%-8d%-14s%-30s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tel,
			pc->data[i].addr);
	}
	printf("*************************************************\n");
}
//查找
void FindPeople(Contact* pc)
{
	if (pc->size == 0)
	{
		printf("通讯录为空，不可查询...\n");
		return;
	}
	char ch[10] = { 0 };
	printf("请输入要查找的姓名:");
	scanf("%s", &ch);
	for (size_t i = 0; i < pc->size; ++i)
	{
		if (strcmp(pc->data[i].name,ch) == 0)
		{
			printf("查找成功...\n");
			printf("*************************************************\n");
			printf("%-10s%-8s%-8s%-14s%-30s\n", "姓名", "性别", "年龄", "电话", "住址");
			printf("%-10s%-8s%-8d%-14s%-30s\n",
				pc->data[i].name,
				pc->data[i].sex,
				pc->data[i].age,
				pc->data[i].tel,
				pc->data[i].addr);
			printf("*************************************************\n");
		}
		else
		{
			printf("查找失败...\n");
		}
	}
}