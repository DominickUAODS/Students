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
