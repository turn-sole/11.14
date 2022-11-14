#pragma once
#include<stdio.h>
#include<string.h>
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30
#define max 1000
typedef struct peoinfe
{
	char name[max_name];
	char sex[max_sex];
	int age;
	char tele[max_tele];
	char addr[max_addr];
}peoinfe;
typedef struct contact
{
	peoinfe data[max];
	int sz;
}contact;
void initcontact(contact* pc);
void addcontact(contact* pc);
void printcontact(const contact* pc);