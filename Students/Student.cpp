#include "Student.h"

void InputData(Student* st)////��� � ������� � ���'��
{
	cout << "������� ��� ��������: ";
	cin >> st->Name;
	cout << "������� ������� ��������: ";
	cin >> st->Surname;
	cout << "������� ������� ��������: ";
	cin >> st->Age;
	cout << "������� ������� ��������: ";
	cin >> st->Phone;
	cout << "������� ������� ���� ��������: ";
	cin >> st->GPA;
}

void AddStudents(ArrayStudents& a, Student* st)
{
	int new_num = a.Count + 1;

	Student** temp = new Student * [new_num];
	for (int i = 0; i < a.Count; i++)
		temp[i] = a.list[i];

	delete[]a.list;
	a.list = temp;
	a.list[a.Count++] = st;
}