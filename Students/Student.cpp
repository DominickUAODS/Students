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
