#include"Contact.h"


//�˵�
void menu()
{
	printf("***********ͨѶ¼***********\n");
	printf("***1.ADD         2.DEL   ***\n");
	printf("***3.FIND        4.MODIFY***\n");
	printf("***5.SHOW        6.CLEAR ***\n");
	printf("***7.SORT        0.EXIT  ***\n");
	printf("****************************\n");

}

int main()
{
	int select = 1;
	Contact con;
	InitContact(&con);
	while (select)
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &select);
		switch (select)
		{
		case EXIT:
			return;
		case ADD:
			AddPeople(&con);
			break;
		case DEL:
			break;
		case FIND:
			FindPeople(&con);
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowPeople(&con);
			break;
		case CLEAR:
			break;
		case SORT:
			break;
		default:
			printf("������������������.\n");
			break;
		}
	}
	return 0;
}