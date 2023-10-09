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

void EditStudent(ArrayStudents& a, int index)
{
	InputData(a.list[index]);
}

void PrintStudents(const ArrayStudents& a)
{
	for (int i = 0; i < a.Count; i++)
	{
		cout << setw(15) << a.list[i]->Name
			<< setw(15) << a.list[i]->Surname
			<< setw(10) << a.list[i]->Age
			<< setw(20) << a.list[i]->Phone
			<< setw(15) << a.list[i]->GPA
			<< endl;
	}
}

void Destroy(ArrayStudents& a)
{
	for (int i = 0; i < a.Count; i++)
		delete a.list[i];
	delete[] a.list;
}