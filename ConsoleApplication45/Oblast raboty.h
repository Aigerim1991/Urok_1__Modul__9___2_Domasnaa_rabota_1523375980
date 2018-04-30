#pragma once
struct Article
{
	char articles[20];
};

struct Product
{
	Article art;
	int quantity;
	int price;
	int year;
	int id;
	char maker[10];
};
struct Maker
{
	char mkr[20];
};

struct Computer
{
	Maker cmpMkr;
	int frequency;
	int RAM;
	int DVD;
	int price;
};
struct birthDate
{
	int day;
	int month;
	int year;
};

struct Subject
{
	char nameSub[15];
	int rate;
};

struct Student
{
	char name[8];
	char groupe[3];
	Subject sub[3];
	birthDate bdt;
};
struct education
{
	char grade[10];
};

struct ocupation
{
	char ocup[30];
};

struct employee
{
	char lastName[10];
	birthDate bdt;
	ocupation ocp;
	int salary;
	education ed[10];
};
/*variant 1*/
void createName(char * name, int len);
void generateProduct(Article *pr, int id);
Product *createProduct(int *count);
void printInfoProduct(Product  * pr, int len);

/*variant 2*/
void generateComp(Maker *cmp);
void printInfoComp(Computer  * cmp, int len);
Computer * createComp(int *count);

/*variant 3*/
void generateSubject(Subject *sub, int num);
void printInfoStd(Student * students, int len);
Student * createStudent(int *count);
void generateDateSt(birthDate *date);

/*variant 4*/
void generatePosition(ocupation * pos);
void generateEducation(education *ed);
void printInfo(employee *file, int len);
employee *createFile(int *count);
