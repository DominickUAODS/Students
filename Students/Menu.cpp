#include "Menu.h"

void Menu(char ptr[][45], int row)
{
	for (int i = 0; i < row; i++)
	{
		cout << ptr[i];
		cout << endl;
	}
}

void MenuAddStudents(ArrayStudents& a)
{
	system("cls");

	///ϳ��������� �������� �� ������ ��������
	Student* st = new Student;
	cout << "������� ������ ";
	cout << " ��������\n";
	InputData(st);

	AddStudents(a, st);
	cout << "� ������ ��������� ����� ��������!";
	_getch();
}

void MenuRemoveStudent(ArrayStudents& a)//////////////////   DZ     
{
	system("cls");

	//����� ������� �������� ��� ����������� ��������
	Student st[15];
	cout << "������� ��� � ������� �������� ��� �������� �� ����" << endl;
	cout << "������� ��� ��������: ";
	cin >> st->Name;
	cout << "������� ������� ��������: ";
	cin >> st->Surname;

	int index = FindStudentIndex(a, st);
	if (index >= 0)
	{
		RemoveStudent(a, index);
		cout << "Student with selected data deleted!" << endl;
	}
	else cout << "Student not found. No data to delete." << endl;
	_getch();
}

void MenuEditStudent(ArrayStudents& a)
{
	system("cls");

	Student st[15];
	cout << "������� ��� ��������: ";
	cin >> st->Name;
	cout << "������� ������� ��������: ";
	cin >> st->Surname;


	int index = FindStudentIndex(a, st);
	if (index >= 0)
		EditStudent(a, index);
	else cout << "Student not found" << endl;
	_getch();
}

void MenuPrintStudents(const ArrayStudents& a)
{
	system("cls");

	cout << setw(15);
	cout << "���";
	cout << setw(15);
	cout << "�������";
	cout << setw(10);
	cout << "�������";
	cout << setw(20);
	cout << "�������";
	cout << setw(15);
	cout << "������� ����";
	cout << endl << endl;
	PrintStudents(a);
	_getch();
}
