#include"contact.h"
int initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
	pc->data=(peoinfe*)calloc()
}
void addcontact(contact* pc)
{
	if (pc->sz == max)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("���������֣�");
	scanf_s("%s", pc->data[pc->sz].name);
	printf("���������䣺");
	scanf_s("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�");
	scanf_s("%s", pc->data[pc->sz].sex);
	printf("������绰��");
	scanf_s("%s", pc->data[pc->sz].tele);
	printf("�������ַ��");
	scanf_s("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�\n");
}
void printcontact(const contact* pc)
{
	int i = 0;
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t %-5d\t %-5s\t %-12s\t %-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}