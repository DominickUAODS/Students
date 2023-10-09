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

	///Підготували студента що будемо додавати
	Student* st = new Student;
	cout << "Введите данные ";
	cout << " студента\n";
	InputData(st);

	AddStudents(a, st);
	cout << "В список добавлены новые студенты!";
	_getch();
}

void MenuRemoveStudent(ArrayStudents& a)//////////////////   DZ     
{
	system("cls");

	//Поиск индеска студента для дальнейшего удаления
	Student st[15];
	cout << "Введите имя и фамилию студента для удаления из базы" << endl;
	cout << "Введите имя студента: ";
	cin >> st->Name;
	cout << "Введите фамилию студента: ";
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
	cout << "Введите имя студента: ";
	cin >> st->Name;
	cout << "Введите фамилию студента: ";
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
	cout << "Имя";
	cout << setw(15);
	cout << "Фамилия";
	cout << setw(10);
	cout << "Возраст";
	cout << setw(20);
	cout << "Телефон";
	cout << setw(15);
	cout << "Средний балл";
	cout << endl << endl;
	PrintStudents(a);
	_getch();
}
