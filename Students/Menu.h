#pragma once

#include <iostream>
#include "Student.h"

using namespace std;

void Menu(char ptr[][45], int row);
void MenuAddStudents(ArrayStudents& a);
void MenuRemoveStudent(ArrayStudents& a);
void MenuEditStudent(ArrayStudents& a);
void MenuPrintStudents(const ArrayStudents& a);