#pragma once

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>

using namespace std;

struct Student
{
	char Name[20];/////////////////////20
	char Surname[20];////////////////20
	int Age;/////////////////////////4
	char Phone[20];////////////////20
	double GPA; // grade point average   8
};

struct ArrayStudents
{
	Student** list = nullptr;///list[i]

	int Count = 0;/////кількість студентів
};

void InputData(Student* st);
void AddStudents(ArrayStudents& a, Student* st);
void RemoveStudent(ArrayStudents& a, int index);/////////////////DZ!!!!!!!!!!!!!!!!!
void EditStudent(ArrayStudents& a, int index);
void PrintStudents(const ArrayStudents& a);
void Destroy(ArrayStudents& a);
int FindStudentIndex(const ArrayStudents& a, Student* st);