#include "Student.h"

void InputData(Student* st)////вже Ї студент в пам'€т≥
{
	cout << "¬ведите им€ студента: ";
	cin >> st->Name;
	cout << "¬ведите фамилию студента: ";
	cin >> st->Surname;
	cout << "¬ведите возраст студента: ";
	cin >> st->Age;
	cout << "¬ведите телефон студента: ";
	cin >> st->Phone;
	cout << "¬ведите средний балл студента: ";
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

void RemoveStudent(ArrayStudents& a, int index)
{
	a.Count--;
	Student** temp = new Student * [a.Count];
	for (int i = 0; i < a.Count; i++)
		if (i >= index)
			temp[i] = a.list[i + 1];
		else
			temp[i] = a.list[i];

	delete[] a.list;
	a.list = temp;
}