#include "Contact.h"

//��ʼ��
void InitContact(Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;
}
//��Ӻ���
void AddPeople(Contact* pc)
{
	printf("������Ҫ��ӵ��˵���Ϣ:>\n");
	printf("����  �Ա�  ����  �绰  ��ַ\n");
	/*printf("����:>");
	scanf("%s", pc->data[pc->size].name);
	printf("�Ա�:>");
	scanf("%s", pc->data[pc->size].sex);
	printf("����:>");
	scanf("%d", &(pc->data[pc->size].age));
	printf("�绰:>");
	scanf("%s", pc->data[pc->size].tel);
	printf("��ַ:>");
	scanf("%s", pc->data[pc->size].addr);
	printf("��ӳɹ�.\n");*/

	scanf("%s%s%d%s%s",
		pc->data[pc->size].name,
		pc->data[pc->size].sex,
		&(pc->data[pc->size].age),
		pc->data[pc->size].tel,
		pc->data[pc->size].addr);
	printf("��ӳɹ�.\n");
	pc->size++;
	//printf("%s %s %d %s %s", pc->data[size].name);
}
//��ʾ
void ShowPeople(Contact* pc)
{
	printf("*************************************************\n");
	printf("%-10s%-8s%-8s%-14s%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
//����
void FindPeople(Contact* pc)
{
	if (pc->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ����ɲ�ѯ...\n");
		return;
	}
	char ch[10] = { 0 };
	printf("������Ҫ���ҵ�����:");
	scanf("%s", &ch);
	for (size_t i = 0; i < pc->size; ++i)
	{
		if (strcmp(pc->data[i].name,ch) == 0)
		{
			printf("���ҳɹ�...\n");
			printf("*************************************************\n");
			printf("%-10s%-8s%-8s%-14s%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
			printf("����ʧ��...\n");
		}
	}
}