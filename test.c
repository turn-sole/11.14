#include "contact.h"
void menu()
{
	printf("********************************\n");
	printf("******  1, add    2.del    *****\n");
	printf("******  2, search 4,modify *****\n");
	printf("******  3. sort   5.print  *****\n");
	printf("******  0. exit            *****\n");
	printf("********************************\n");
}
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};
int main()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do
	{
		menu();
		printf("«Î—°‘Ò£∫");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT:
			printcontact(&con);
			break;
		case EXIT:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}