#include <Windows.h>
#include <conio.h>
#include "Student.h"
#include "Menu.h"
#include <iostream>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	/*Student obj1;
	std::cout << sizeof(obj1) << endl;*/

	ArrayStudents a;
	///a.Count;//0
	///a.list;///nullptr  список 

	Student* st1 = new Student{ "Name1","Surename1",22,"222322",10.5 };
	Student* st2 = new Student{ "Name2","Surename2",23,"11111",10 };
	Student* st3 = new Student{ "Name3","Surname3",25,"09554834",9.5 };

	AddStudents(a, st1);
	AddStudents(a, st2);
	AddStudents(a, st3);

	char menu[][45] = {
	"1. Добавление студентов",
	"2. Удаление студента",
	"3. Модификация студента",
	"4. Вывод на экран списка",
	"5. Выход" };

	while (true)
	{
		system("cls");
		Menu(menu, 5);
		int choice = _getch();
		switch (choice)
		{
		case '1':
			MenuAddStudents(a);
			break;
		case '2':
			MenuRemoveStudent(a);
			break;
		case '3':
			MenuEditStudent(a);
			break;
		case '4':
			MenuPrintStudents(a);
			break;
		case '5':
			Destroy(a);
			return 0;
		default:
			cout << "No such option! Try again!" << endl;
			Sleep(1000);
			break;
		}
	}

	return 0;
}