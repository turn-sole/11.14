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
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字：");
	scanf_s("%s", pc->data[pc->sz].name);
	printf("请输入年龄：");
	scanf_s("%d", &(pc->data[pc->sz].age));
	printf("请输入性别：");
	scanf_s("%s", pc->data[pc->sz].sex);
	printf("请输入电话：");
	scanf_s("%s", pc->data[pc->sz].tele);
	printf("请输入地址：");
	scanf_s("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功\n");
}
void printcontact(const contact* pc)
{
	int i = 0;
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t %-5d\t %-5s\t %-12s\t %-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}