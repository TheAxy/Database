#include "menu.h"

#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Ru");

    int capacity = 1;
    student *studentsArr = new student[capacity];
       

    MainMenu(studentsArr, &capacity);

    system("cls");
}
