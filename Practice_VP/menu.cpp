#include "menu.h"

int CharII(char* arr, int bias) {
    int choiceInt{};
    //if (arr[i] == ' ')
    for (int i = bias; arr[i] != '\0'; i++)
    {
        if (arr[i] != ' ') {
            if ((int)arr[i] < 47 || (int)arr[i] > 57) {
                choiceInt = -1000;
                break;
            }
            else choiceInt = 10 * choiceInt + arr[i] - '0';
        }
        else break;
    }
    return choiceInt;
}
int CharII(char chr) {
    int choiceInt{};
    if (chr != ' ') {
        if ((int)chr < 47 || (int)chr > 57) {
            choiceInt = -1000;
        }
        else choiceInt = 10 * choiceInt + chr - '0';
    }
    
    return choiceInt;
}


bool Check(char* str, int action) {
    for (int i = 0; i <= strlen(str); i++)
    {
        switch (action)
        {
        case 1:
            if ((int)str < 47 || (int)str > 57) {
                return -1;
            }
            else return 1;
            break;

        case 2:
            if ((int)str >= 97 && (int)str <= 122 || (int)str >= 65 && (int)str <= 90) {
                return 1;
            }
            else return -1;
            break;

        default:
            return 0;
            break;
        }
    }
}

void PrintMenu() {
    cout << setw(3) << "1. " << "Ввести информацию\n"
        << setw(3) << "2. " << "Вывести информацию\n"
        << setw(3) << "3. " << "Дополнительные методы\n"
        << setw(3) << "0. " << "Выход\n" << endl;
}

int CountStudent(student *studentArr, int *capacity) {
    for (int i = 0; i < *capacity; i++)
    {
        if (!*studentArr[i].fill) {
            return i;
        }
    }
}

int MaxValue(char* arr) {
    int max = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        max += 1;
    }
    return max;
}
void MaxValue(student* arr, int *result, int* capacity) {
    int count = CountStudent(arr, capacity);
    for (int j = 0; j < count; j++)
    {
        if (MaxValue(arr[j].surname) > result[0]) result[0] = MaxValue(arr[j].surname);
        if (MaxValue(arr[j].name) > result[1]) result[1] = MaxValue(arr[j].name);
        if (MaxValue(arr[j].patronymic) > result[2]) result[2] = MaxValue(arr[j].patronymic);
        if (MaxValue(arr[j].course) > result[3]) result[3] = MaxValue(arr[j].course);
        if (MaxValue(arr[j].group) > result[4]) result[4] = MaxValue(arr[j].group);
    }

}

void StudCopy(student* arr, int one, int to)
{
    for (int j = 0; j < strlen(arr[one].name); j++)
    {
        arr[to].name[j] = arr[one].name[j];
        arr[to].name[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr[one].surname); j++)
    {
        arr[to].surname[j] = arr[one].surname[j];
        arr[to].surname[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr[one].patronymic); j++)
    {
        arr[to].patronymic[j] = arr[one].patronymic[j];
        arr[to].patronymic[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr[one].group); j++)
    {
        arr[to].group[j] = arr[one].group[j];
        arr[to].group[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr[one].course); j++)
    {
        arr[to].course[j] = arr[one].course[j];
        arr[to].course[j + 1] = '\0';
    }
    for (int j = 0; j < 100; j++)
    {
        arr[to].marks[j] = arr[one].marks[j];
        arr[to].marks[j + 1] = '0';
    }
    *arr[to].fill = true;
}
void StudCopy(student* arr, student one, int to)
{
    for (int j = 0; j < strlen(one.name); j++)
    {
        arr[to].name[j] = one.name[j];
        arr[to].name[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(one.surname); j++)
    {
        arr[to].surname[j] = one.surname[j];
        arr[to].surname[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(one.patronymic); j++)
    {
        arr[to].patronymic[j] = one.patronymic[j];
        arr[to].patronymic[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(one.group); j++)
    {
        arr[to].group[j] = one.group[j];
        arr[to].group[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(one.course); j++)
    {
        arr[to].course[j] = one.course[j];
        arr[to].course[j + 1] = '\0';
    }
    for (int j = 0; j < 100; j++)
    {
        arr[to].marks[j] = one.marks[j];
        arr[to].marks[j + 1] = '0';
    }
    *arr[to].fill = true;
}
void StudCopy(student arr, student one)
{
    for (int j = 0; j < strlen(arr.name); j++)
    {
        one.name[j] = arr.name[j];
        one.name[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr.surname); j++)
    {
        one.surname[j] = arr.surname[j];
        one.surname[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr.patronymic); j++)
    {
        one.patronymic[j] = arr.patronymic[j];
        one.patronymic[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr.group); j++)
    {
        one.group[j] = arr.group[j];
        one.group[j + 1] = '\0';
    }
    for (int j = 0; j < strlen(arr.course); j++)
    {
        one.course[j] = arr.course[j];
        one.course[j + 1] = '\0';
    }
    for (int j = 0; j < 100; j++)
    {
        one.marks[j] = arr.marks[j];
        one.marks[j + 1] = '0';
    }
    *one.fill = true;
}

student* ExtendStud(student* arr, int* capacity) {
    int studCount = CountStudent(arr, capacity);
    student* arr1 = new student[studCount + 5];
    for (int i = 0; i < studCount; i++)
    {
        StudCopy(arr[i], arr1[i]);
    }
    delete[] arr;
    *capacity = studCount + 5;
    return arr1;
}

void ExtendStud1(student*& arr, int* capacity) {
    int studCount = CountStudent(arr, capacity);
    student* arr1 = new student[studCount + 5];
    for (int i = 0; i < studCount; i++)
    {
        StudCopy(arr[i], arr1[i]);
    }
    delete[] arr;
    *capacity = studCount + 5;
    arr = arr1;
}

int WhatMore(char* str, char* str1) {
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] < str1[i]) return 1;
        else if (str[i] > str1[i]) return 2;
    }
    return 0;
}
int WhatMore(int str, int str1) {
    if (str < str1) return 2;
    else if (str > str1) return 1;
    return 0;
}

void Sort(int* arr, int lenght, int *arr1) {
    int* arr2 = new int[lenght] {};

    for (int i = 0; i < lenght; i++)
    {
        arr2[i] = arr[i];
    }

    int max = -10, bias = 0, buf = 0;
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            if (arr2[i] < arr2[j]) {
                buf = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = buf;
            }
        }
    }
    arr1 = arr2;
}

int Find(int* arr, int lenght, int symbol) {
    for (int i = 0; i < lenght; i++)
    {
        if (arr[i] == symbol) return i;
    }
    return -1;
}

bool Find(char* str) {
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == '-' && str[i + 1] == 'b') return true;
    }
    return false;
}

int WhatAbsent(int* arr, int lenght) {
    int buf = 0;
    int* arr1 = new int[lenght] {};
    Sort(arr, lenght, arr1);
    bool fl{};
    for (int i = 0; i < lenght; i++)
    {
        //if (arr1[i] != i) return i;
        fl = false;
        if (arr[i] == 0) buf += 1;
        for (int j = 0; j < lenght; j++)
        {
            if (buf > 1 && j != 0) {
                if (arr[i] == j) fl = true;
            }
            if (buf < 2) if (arr[i] == j) fl = true;
        }
        if (!fl) return i;
    }
    return -1;
}

int Change(student* arr, int column, int param, char *str1) {
    char* str = new char[255]{};
    int *a = new int[255]{};
    int i = 0, buf = 0;

    if (str1[0] == ' ') i++;
    for (i; str1[i] != '\0'; i++)
    {
        str[buf] = str1[i];
        buf++;
    }
    buf = 0; i = 0;

    switch (param)
    {
    case 1:
        strcpy_s(arr[column - 1].surname, 255, str1);
        break;
    case 2:
        strcpy_s(arr[column - 1].name, 255, str1);
        break;
    case 3:
        strcpy_s(arr[column - 1].patronymic, 255, str1);
        break;
    case 4:
        strcpy_s(arr[column - 1].course, 255, str1);
        break;
    case 5:
        strcpy_s(arr[column - 1].group, 255, str1);
        break;
    case 6:
        while (str[i] != '\0')
        {
            if (str[i] == ' ') i++;
            a[buf] = CharII(str, i);
            i++;
            buf++;
        }
        arr[column - 1].marks = a;
        break;
    default:
        break;
    }
    //cin.ignore();
    delete[] str;
    delete[] a;
    return 0;
}
int Change(student* arr, int column, int param, int count, char str1) {
    int i = 0, buf = 0;
    //cin.get(str, 255);


    if (str1 == ' ') {
        return 2;
    }
    buf = 0; i = 0;

    buf = CharII(str1);

    arr[column - 1].marks[count - 1] = buf;

    if (buf == -1000) return 0;
    return 1;
}

int SortHelp(student arr, student arr1, int column, int param, int a) {
    char str[255]{}, maxS[255] = "";
    int countSt = 0;
    int buf = 0;

    if (a == column && a != 6) {
        a++;
        buf = SortHelp(arr, arr1, column, param, a);
    }
    else {
        switch (a)
        {
        case 1:
            strcpy_s(str, arr.surname);
            strcpy_s(maxS, arr1.surname);
            break;
        case 2:
            strcpy_s(str, arr.name);
            strcpy_s(maxS, arr1.name);
            break;
        case 3:
            strcpy_s(str, arr.patronymic);
            strcpy_s(maxS, arr1.patronymic);
            break;
        case 4:
            strcpy_s(str, arr.course);
            strcpy_s(maxS, arr1.course);
            break;
        case 5:
            strcpy_s(maxS, arr1.group);
            strcpy_s(str, arr.group);
            break;
        case 6:
            for (int i = 0; arr.marks[i] != '\0'; i++) {
                if (arr.marks[i] > arr1.marks[i]) return 1;
                else if (arr.marks[i] < arr1.marks[i]) return 2;
            }
            break;
        default:
            break;
        }

        _strlwr_s(str);
        _strlwr_s(maxS);

        buf = WhatMore(str, maxS);
    
        if (buf == 0) {
            a++;
            buf = SortHelp(arr, arr1, column, param, a);
        }
    }
    if (a >= 6) return param;
    return buf;
}
void SortStep1(student* arr, int column, int param, int* capacity) {
    student buff{};
    int countSt{}, aa{};
    char str[255]{}, maxS[255] = "";

    countSt = CountStudent(arr, capacity);
    for (int i = 0; i < countSt; i++)
    {
        switch (column)
        {
        case 1:
            strcpy_s(str, arr[i].surname);
            break;
        case 2:
            strcpy_s(str, arr[i].name);
            break;
        case 3:
            strcpy_s(str, arr[i].patronymic);
            break;
        case 4:
            strcpy_s(str, arr[i].course);
            break;
        case 5:
            strcpy_s(str, arr[i].group);
            break;
        case 6:
            break;
        default:
            break;
        }
        _strlwr_s(str);

        for (int j = 0; j < countSt; j++)
        {
            switch (column)
            {
            case 1:
                strcpy_s(maxS, arr[j].surname);
                break;
            case 2:
                strcpy_s(maxS, arr[j].name);
                break;
            case 3:
                strcpy_s(maxS, arr[j].patronymic);
                break;
            case 4:
                strcpy_s(maxS, arr[j].course);
                break;
            case 5:
                strcpy_s(maxS, arr[j].group);
                break;
            case 6:

                break;
            default:
                break;
            }
            _strlwr_s(maxS);
            if (i != j) {
                if (WhatMore(str, maxS) == param) {
                    StudCopy(arr[i], buff);
                    StudCopy(arr, j, i);
                    StudCopy(arr, buff, j);
                }
                else if (WhatMore(str, maxS) == 0) {
                    aa = SortHelp(arr[i], arr[j], column, param, 1);
                    if (aa == param) {
                        StudCopy(arr[i], buff);
                        StudCopy(arr, j, i);
                        StudCopy(arr, buff, j);
                    }
                }
            }
        }
    }
}
void SortByMark(student* arr, int count, int param, int* capacity) {
    student buff{};
    int countSt = CountStudent(arr, capacity);
    int aa = 0;
    for (int i = 0; i < countSt; i++)
    {
        for (int j = i; j < countSt; j++)
        {
            if (i != j) {
                if (WhatMore(arr[i].marks[count], arr[j].marks[count]) == param) {
                    StudCopy(arr[i], buff);
                    StudCopy(arr, j, i);
                    StudCopy(arr, buff, j);
                }
                else if (arr[i].marks[count] == arr[j].marks[count]) {
                    aa = SortHelp(arr[i], arr[j], 6, param, 1);
                    if (aa == param) {
                        StudCopy(arr[i], buff);
                        StudCopy(arr, j, i);
                        StudCopy(arr, buff, j);
                    }
                }/*
                else if (arr[i].marks[count] < arr[j].marks[count] && param == 2) {
                    StudCopy(arr[i], buff);
                    StudCopy(arr, j, i);
                    StudCopy(arr, buff, j);
                }*/
            }

        }

    }
}

void Delete(student*& arr, int column, int* capacity) {
    for (int i = column-1; i < CountStudent(arr, capacity)-1; i++)
    {
        StudCopy(arr, i+1, i);
    }
    arr[CountStudent(arr, capacity) - 1].StudClear();
}

int СheckInt(char *arr) {

    int buff = 0, a = 0;
    while (a == 0) {
        buff = CharII(arr, 0);
        if (buff == -1000 || strlen(arr) > 1) {
            a = 0;
            cout << "Введите число от 1 до 9: "; cin >> arr;
        }
        else a = 1;
    }
    return buff;
}
int СheckInt(char* arr, int first, int last) {

    int buff = 0, a = 0;
    while (a == 0) {
        buff = CharII(arr, 0);
        if (buff == -1000 || strlen(arr) > 1 || buff < first || buff > last) {
            a = 0;
            cout << "Введите число от " << first << " до " << last << ": "; cin >> arr;
        }
        else a = 1;
    }
    return buff;
}

bool Add(student*& studentsArr, int count, bool *esc, int *capacity) {

    student buff{};
    char surname[100]{}, name[100]{}, patronymic[100]{};
    char course[100]{}, group[100]{};
    char mark1C[10]{}, mark2C[10]{}, mark3C[10]{}, mark4C[10]{}, mark5C[10]{}, mark6C[10]{};
    int mark1{}, mark2{}, mark3{}, mark4{}, mark5{}, mark6{};
    int countSt{};
    char marks[100]{};

    //cout << "Введите ФИО, курс, группу и 6 оценок: ";

    cout << "[Введите -b для выхода]" << endl;

    cout << "Введите Фамилию: "; cin >> surname;
    if (Find(surname)) {
        return false;
    }
    cout << "Введите Имя: "; cin >> name;
    if (Find(name)) {
        return false;
    }
    cout << "Введите Отчество: "; cin >> patronymic;
    if (Find(patronymic)) {
        return false;
    }
    cout << "Введите Курс: "; cin >> course;
    if (Find(course)) {
        return false;
    }
    cout << "Введите Группу: "; cin >> group;
    if (Find(group)) {
        return false;
    }
    cout << "Введите 1 отметку: "; cin >> mark1C;
    mark1 = СheckInt(mark1C);
    cout << "Введите 2 отметку: "; cin >> mark2C;
    mark2 = СheckInt(mark2C);
    cout << "Введите 3 отметку: "; cin >> mark3C;
    mark3 = СheckInt(mark3C);
    cout << "Введите 4 отметку: "; cin >> mark4C;
    mark4 = СheckInt(mark4C);
    cout << "Введите 5 отметку: "; cin >> mark5C;
    mark5 = СheckInt(mark5C);
    cout << "Введите 6 отметку: "; cin >> mark6C;
    mark6 = СheckInt(mark6C);

    countSt = CountStudent(studentsArr, capacity);
    
    if (countSt >= studentsArr[0].capacity) ExtendStud1(studentsArr, capacity);

    countSt = CountStudent(studentsArr, capacity);

    for (int i = countSt; i > count-1; i--)
    {
        StudCopy(studentsArr, i-1, i);
    }

    studentsArr[count - 1].StudClear();
    *studentsArr[count - 1].fill = false;
   

    if (!*studentsArr[count-1].fill) {
        *studentsArr[count - 1].fill = true;

        /*for (int j = 0; j < 6; j++)
        {
            cin >> studentsArr[count-1].marks[j];
        }*/
        studentsArr[count - 1].marks[0] = mark1;
        studentsArr[count - 1].marks[1] = mark2;
        studentsArr[count - 1].marks[2] = mark3;
        studentsArr[count - 1].marks[3] = mark4;
        studentsArr[count - 1].marks[4] = mark5;
        studentsArr[count - 1].marks[5] = mark6;
        for (int i = 0; surname[i] != '\0'; i++)
        {
            studentsArr[count - 1].surname[i] = surname[i];
        }

        for (int i = 0; name[i] != '\0'; i++)
        {
            studentsArr[count - 1].name[i] = name[i];
        }

        for (int i = 0; patronymic[i] != '\0'; i++)
        {
            studentsArr[count - 1].patronymic[i] = patronymic[i];
        }

        for (int i = 0; course[i] != '\0'; i++)
        {
            studentsArr[count - 1].course[i] = course[i];
        }

        for (int i = 0; group[i] != '\0'; i++)
        {
            studentsArr[count - 1].group[i] = group[i];
        }
    }
    return true;
}

void ToDinam(char* one, char* to) {
    int count = 0;

    /*count = CountStudent(studentsArr);
    if (count >= studentsArr[0].capacity) ExtendStud1(studentsArr);
    count = CountStudent(studentsArr);*/
    //if (!*studentsArr[count].fill) {
    for (int i = 0; i < strlen(one); i++)
    {
        to[i] = one[i];
    }

    //}

}

int WriteInFile(student* studentsArr) {
    ofstream fout("base_main.txt");

    if (!fout.is_open())
    {
        fout.close();
        return -1;
    }
    else {
        for (int o = 0; *studentsArr[o].fill; o++)
        {

            fout << "\n";
            for (int i = 0; studentsArr[o].surname[i] != '\0'; i++)
            {
                fout << studentsArr[o].surname[i];
            }
            fout << " ";

            for (int i = 0; studentsArr[o].name[i] != '\0'; i++)
            {
                fout << studentsArr[o].name[i];
            }
            fout << " ";

            for (int i = 0; studentsArr[o].patronymic[i] != '\0'; i++)
            {
                fout << studentsArr[o].patronymic[i];
            }
            fout << " ";

            for (int i = 0; studentsArr[o].course[i] != '\0'; i++)
            {
                fout << studentsArr[o].course[i];
            }
            fout << " ";

            for (int i = 0; studentsArr[o].group[i] != '\0'; i++)
            {
                fout << studentsArr[o].group[i];
            }
            fout << " ";

            for (int i = 0; studentsArr[o].marks[i] != '\0'; i++)
            {
                fout << studentsArr[o].marks[i] << " ";
            }

        }
    }

    fout.close();
    return 1;
}
int WriteInFileBin(student* studentsArr, int* capacity) {
    ofstream fout("base_main.bin", ios::binary);

    char *str = new char[255]{};
    int count = CountStudent(studentsArr, capacity);

    if (!fout.is_open()) return -1;
    else {
        //fout.write((char*)&studentsArr, sizeof(studentsArr));
        //fout << " ";
        for (int o = 0; o < count; o++)
        {

            ToDinam(studentsArr[o].surname, str);
            fout.write((char*)&str, sizeof(str));
            fout << " ";

           

            ToDinam(studentsArr[o].name, str);
            fout.write((char*)&*str, sizeof(str));
            fout << " ";


            ToDinam(studentsArr[o].patronymic, str);
            fout.write((char*)&str, sizeof(str));
            fout << " ";

            ToDinam(studentsArr[o].course, str);
            fout.write((char*)&str, sizeof(str));
            fout << " ";

            ToDinam(studentsArr[o].group, str);
            fout.write((char*)&str, sizeof(str));
            fout << " ";

            /*fout.write((char*)&*studentsArr[count].surname, sizeof(studentsArr[count].surname));
            fout << " ";

            fout.write((char*)&*studentsArr[count].name, sizeof(studentsArr[count].name));
            fout << " ";

            fout.write((char*)&*studentsArr[count].patronymic, sizeof(studentsArr[count].patronymic));
            fout << " ";

            fout.write((char*)&*studentsArr[count].course, sizeof(studentsArr[count].course));
            fout << " ";

            fout.write((char*)&*studentsArr[count].group, sizeof(studentsArr[count].group));
            fout << " ";

            for (int i = 0; i < 6; i++) {
                fout.write((char*)&studentsArr[count].marks[i], sizeof(studentsArr[count].marks[i]));
                fout << " ";
            }
            fout << "\n";*/

            //fout.write((char*)&studentsArr[o].marks, sizeof(studentsArr[o].marks));

        }
    }

    fout.close();
    return 1;
}

int ReadFile(student*& studentsArr, char* path, int isTextFile, int* capacity) {

    ifstream fin(path);

    int count{};

    if (!fin.is_open()) return -1;
    else {
        for (int o = 0; o < 255; o++)
        {

            if (!fin.eof()) {
                count = CountStudent(studentsArr, capacity);
                if (count >= *capacity) ExtendStud1(studentsArr, capacity);
                count = CountStudent(studentsArr, capacity);
                if (*studentsArr[count].fill) continue;
                fin >> studentsArr[count].surname >> studentsArr[count].name >> studentsArr[count].patronymic
                    >> studentsArr[count].course >> studentsArr[count].group;
                for (int i = 0; i < 6; i++) {
                    fin >> studentsArr[count].marks[i];
                }

                if (studentsArr[count].name[0]) *studentsArr[count].fill = true;
            }
            else break;
        }
    }
    fin.close();
    return 1;
}
int ReadFileBin(student*& studentsArr, char* path, int* capacity) {
    ifstream fin(path, ios::binary);

    int count{};
    char *str = new char[255]{};

    if (!fin.is_open()) return -1;
    else {
        for (int o = 0; o < 255; o++)
        {

            if (!fin.eof()) {
                count = CountStudent(studentsArr, capacity);
                if (count >= studentsArr[0].capacity) ExtendStud1(studentsArr, capacity);
                count = CountStudent(studentsArr, capacity);
                if (*studentsArr[count].fill) continue;

                fin.read((char*)&*str, sizeof(str));
                ToDinam(str, studentsArr[count].surname);

                fin.read((char*)&str, sizeof(str));
                ToDinam(str, studentsArr[count].name);

                fin.read((char*)&str, sizeof(str));
                ToDinam(str, studentsArr[count].patronymic);

                fin.read((char*)&str, sizeof(str));
                ToDinam(str, studentsArr[count].course);

                fin.read((char*)&str, sizeof(str));
                ToDinam(str, studentsArr[count].group);

                /*fin.read((char*)&*studentsArr[count].surname, sizeof(studentsArr[count].surname));

                fin.read((char*)&*studentsArr[count].name, sizeof(studentsArr[count].name));

                fin.read((char*)&*studentsArr[count].patronymic, sizeof(studentsArr[count].patronymic));

                fin.read((char*)&*studentsArr[count].course, sizeof(studentsArr[count].course));

                fin.read((char*)&*studentsArr[count].group, sizeof(studentsArr[count].group));

                for (int i = 0; i < 6; i++) {
                    fin.read((char*)&studentsArr[count].marks[i], sizeof(studentsArr[count].marks[i]));
                }*/

                if (studentsArr[count].name[0]) *studentsArr[count].fill = true;
            }
            else break;
        }
    }
    fin.close();
    return 1;
}

void PrintPrimal(student* studentsArr, int* capacity) {
    int maxSize = CountStudent(studentsArr, capacity) / 10;

    int count = CountStudent(studentsArr, capacity);
    const int ARRTOMAXSIZE = 10;
    int arrToMax[ARRTOMAXSIZE]{ 7, 3, 9, 4, 6};
    int arrToMaxSumm{};
    MaxValue(studentsArr, arrToMax, capacity);

    for (int i = 0; i < ARRTOMAXSIZE; i++)
    {
        arrToMaxSumm += arrToMax[i];
    }

    //cout << setw(arrToMaxSumm + 11 + 5 + 14 + maxSize + 4) << "База данных\n";

    for (int i = 0; i < arrToMaxSumm + 11 + 5 + 14 + maxSize + 4; i++)
    {
        cout << "-";
    }
    cout << endl;

    cout.setf(ios::left);

    cout << "| ";
    cout << setw(maxSize) << "№";

    cout << " | ";
    cout << setw(arrToMax[0]) << "Фамилия";

    cout << " | ";
    cout << setw(arrToMax[1]) << "Имя";

    cout << " | ";
    cout << setw(arrToMax[2]) << "Отчестсво";

    cout << " | ";
    cout << setw(arrToMax[3]) << "Курс";

    cout << " | ";
    cout << setw(arrToMax[4]) << "Группа";

    cout << " | ";
    cout << setw(12) << "Отметки";

    cout << "|\n";

    for (int i = 0; i < arrToMaxSumm + 11 + 5 + 14 + maxSize + 4; i++)
    {
        cout << "-";
    }
    cout << endl;


    for (int i = 0; i < count; i++)
    {
        cout << "| ";
        cout << setw(maxSize) << i+1;

        cout << " | ";
        cout << setw(arrToMax[0]) << studentsArr[i].surname;

        cout << " | ";
        cout << setw(arrToMax[1]) << studentsArr[i].name;

        cout << " | ";
        cout << setw(arrToMax[2]) << studentsArr[i].patronymic;

        cout << " | ";
        cout << setw(arrToMax[3]) << studentsArr[i].course;

        cout << " | ";
        cout << setw(arrToMax[4]) << studentsArr[i].group;

        cout << " | ";
        for (int j = 0; j < 6; j++)
        {
            cout << studentsArr[i].marks[j] << " ";
        }

        cout << "|\n";

        for (int i = 0; i < arrToMaxSumm + 11 + 5 + 14 + maxSize + 4; i++)
        {
            cout << "-";
        }
        cout << endl;

    }
}

void PrintSpecial(student* studentsArr, int* capacity) {

    int count = CountStudent(studentsArr, capacity);
    int maxSize = CountStudent(studentsArr, capacity) / 10;
    const int ARRTOMAXSIZE = 10;
    int arrToMax[ARRTOMAXSIZE]{ 7, 3, 9, 4, 6 };
    int arrToMaxSumm{};
    MaxValue(studentsArr, arrToMax, capacity);

    int sortSpecial{};

    for (int i = 0; i < ARRTOMAXSIZE; i++)
    {
        if (i != 3) arrToMaxSumm += arrToMax[i];
    }

    for (int i = 0; i < arrToMaxSumm + 11 + 5 + 14 + maxSize + 1; i++)
    {
        cout << "-";
    }
    cout << endl;
    
    cout.setf(ios::left);

    cout << "| ";
    cout << setw(maxSize) << "№";

    cout << " | ";
    cout << setw(arrToMax[0]) << "Фамилия";

    cout << " | ";
    cout << setw(arrToMax[1]) << "Имя";

    cout << " | ";
    cout << setw(arrToMax[2]) << "Отчестсво";

    cout << " | ";
    cout << setw(arrToMax[4]) << "Группа";

    cout << " | ";
    cout << setw(12) << "Отметки";

    cout << "|\n";

    for (int i = 0; i < arrToMaxSumm + 11 + 5 + 14 + maxSize + 1; i++)
    {
        cout << "-";
    }
    cout << endl;
    
    for (int i = 0; i < count; i++)
    {
        sortSpecial = 0;
        for (int j = 0; j < 6; j++)
        {
            if (studentsArr[i].marks[j] == 2) sortSpecial += 1;
        }
        if (sortSpecial) {
            cout << "| ";
            cout << setw(maxSize) << i + 1;

            cout << " | ";
            cout << setw(arrToMax[0]) << studentsArr[i].surname;

            cout << " | ";
            cout << setw(arrToMax[1]) << studentsArr[i].name;

            cout << " | ";
            cout << setw(arrToMax[2]) << studentsArr[i].patronymic;

            cout << " | ";
            cout << setw(arrToMax[4]) << studentsArr[i].group;

            cout << " | ";
            for (int j = 0; j < 6; j++)
            {
                cout << studentsArr[i].marks[j] << " ";
            }

            cout << "|\n";

            for (int i = 0; i < arrToMaxSumm + 11 + 5 + 14 + maxSize + 1; i++)
            {
                cout << "-";
            }
            cout << endl;
        }
    }
}

void MainMenu(student* studentsArr, int *capacity) {
    
    char choiceChar[100]{};
    int choiceInt{};
    bool menuIs = true, midMenu = true, midMenuS = true;
    while (menuIs) {
        cout << "--------------------МЕНЮ--------------------" << endl;
        PrintMenu();
        cout << "Выберите действие: ";
        cin >> choiceChar;
        //choiceInt = CharII(choiceChar, 0);
        choiceInt = СheckInt(choiceChar, 0, 3);

        switch (choiceInt)
        {
        case 1:
            midMenu = true;
            system("cls");
            while (midMenu) {
                cout << "--------------------Ввод--------------------" << endl;
                cout << "1. " << "Ввести с клавиатуры\n"
                    << "2. " << "Загрузить с файла\n"
                    << "0. " << "Назад\n";
                cout << "\nВыберите действие: "; cin >> choiceChar;
                //choiceInt = CharII(choiceChar, 0);
                choiceInt = СheckInt(choiceChar, 0, 2);

                switch (choiceInt)
                {
                case 1:
                    if (Add(studentsArr, CountStudent(studentsArr, capacity) + 1, &midMenu, capacity)) {
                        system("cls");
                        cout << "Успешно" << endl;
                    }
                    else {
                        system("cls");
                        cout << "Выход" << endl;
                    }
                    
                    break;
                case 2: 
                    midMenuS = true;
                    system("cls");
                    while (midMenuS) {
                        cout << "--------------------Загрузить с файла--------------------\n";
                        cout << "1. " << "Ввести из текстового файла\n"
                             << "2. " << "Ввести из бинарного файла\n"
                             << "0. " << "Назад\n";
                        cout << "\nВыберите действие: ";cin >> choiceChar;
                        //choiceInt = CharII(choiceChar, 0);
                        choiceInt = СheckInt(choiceChar, 0, 2);

                        switch (choiceInt)
                        {
                        case 1:
                        {
                            char path[10] = "base.txt";
                            cout << "Введите полный путь файла: ";
                            //cin >> path;
                            system("cls");
                            if (!Find(path)) {
                                if (ReadFile(studentsArr, path, 1, capacity) > 0) {
                                    cout << "Успешно" << endl;
                                    midMenuS = false;
                                }
                                else cout << "File is not open!" << endl;
                            }
                            else {
                                cout << "Выход" << endl;
                            }
                        }
                            
                            break;
                        case 2:
                        {   
                            char path[15] = "base_main.bin";
                            cout << "Введите полный путь файла: ";
                            //cin >> path;
                            system("cls");
                            if (!Find(path)) {
                                if (ReadFileBin(studentsArr, path, capacity) > 0) {
                                    cout << "Успешно" << endl;
                                    midMenuS = false;
                                }
                                else cout << "File is not open!" << endl;
                            }
                            else {
                                cout << "Выход" << endl;
                            }
                        }
                        break;
                        case 0:
                            midMenuS = false;
                            system("cls");
                            break;
                        default:
                            system("cls");
                            cout << "Введите число от 0 до 2" << endl;
                            break;
                        }
                    
                }
                    break;
                case 0:
                    system("cls");
                    midMenu = false;
                    break;
                default:
                    system("cls");
                    cout << "Введите число от 0 до 2" << endl;
                    break;
                }
            }
            break;
        case 2:
            midMenu = true;
            system("cls");
            while (midMenu) {
                cout << "--------------------Вывод--------------------" << endl;
                cout << setw(3) << "1. " << "Вывести на экран\n"
                    << setw(3) << "2. " << "Вывести по запросу\n"
                    << setw(3) << "3. " << "Вывести в файл\n"
                    << setw(3) << "0. " << "Назад\n";
                cout << "\nВыберите действие: "; cin >> choiceChar;
                //choiceInt = CharII(choiceChar, 0);
                choiceInt = СheckInt(choiceChar, 0, 3);

                switch (choiceInt)
                {
                case 1:
                    system("cls");
                    
                    PrintPrimal(studentsArr, capacity);
                    //midMenu = false;
                    break;
                case 2:
                    system("cls");
                    PrintSpecial(studentsArr, capacity);
                    //midMenu = false;
                    break;
                case 3:
                    midMenuS = true;
                    system("cls");
                    while (midMenuS) {
                        cout << "--------------------Загрузить в файла--------------------\n";
                        cout << setw(3) << "1. " << "Вывести в текстовый файл\n"
                            << setw(3) << "2. " << "Вывести в бинарный файл\n"
                            << setw(3) << "0. " << "Назад\n";
                        cout << "\nВыберите действие: ";cin >> choiceChar;
                        //choiceInt = CharII(choiceChar, 0);
                        choiceInt = СheckInt(choiceChar, 0, 2);

                        switch (choiceInt)
                        {
                        case 1:
                            system("cls");

                            if (WriteInFile(studentsArr) < 0) cout << "Ошибка в открытие файла" << endl;
                            else cout << "Успешно" << endl;
                            break;
                        case 2:
                            system("cls");
                            if (WriteInFileBin(studentsArr, capacity) < 0) cout << "Ошибка в открытие файла" << endl;
                            break;
                        case 0:
                            system("cls");
                            midMenuS = false;
                            break;
                        default:
                            system("cls");
                            cout << "Введите число от 0 до 3" << endl;
                            break;
                        }

                    }
                    break;
                case 0:
                    system("cls");
                    midMenu = false;
                    break;
                default:
                    system("cls");
                    cout << "Введите число от 0 до 3" << endl;
                    break;
                }
            }
            break;
        case 3:
            midMenu = true;
            system("cls");
            while (midMenu) {
                cout << "--------------------Дополнительные методы--------------------" << endl;
                cout << setw(3) << "1. " << "Добавление записи\n"
                    << setw(3) << "2. " << "Изменение записи\n"
                    << setw(3) << "3. " << "Удаление записи\n"
                    << setw(3) << "4. " << "Сортировка\n"
                    << setw(3) << "0. " << "Назад\n";
                cout << "\nВыберите действие: "; cin >> choiceChar;
                //choiceInt = CharII(choiceChar, 0);
                choiceInt = СheckInt(choiceChar, 0, 4);

                switch (choiceInt)
                {
                case 1:
                {
                    system("cls");
                    cout << "Добавление записи: " << endl;
                    PrintPrimal(studentsArr, capacity);
                    int cc{}, count{}, aa = 0, bb = 0;
                    count = CountStudent(studentsArr, capacity)+1;

                    char aa1C[10]{};
                    cout << "[Введите -b для выхода]" << endl;
                    cout << "На какое место вы хотите добавить студента: "; cin >> aa1C;
                    
                    if (Find(aa1C)) {
                        system("cls");
                        cout << "Выход" << endl;
                        break;
                    }

                    aa = СheckInt(aa1C, 1, count);

                    Add(studentsArr, aa, &midMenu, capacity);
                    system("cls");
                    cout << "Успешно!" << endl;

                }
                    system("cls");
                    break;

                case 2:
                {
                    midMenuS = true;
                    system("cls");
                    if (CountStudent(studentsArr, capacity) == 0) cout << "База данных пуста." << endl;
                    else {

                        cout << "--------------------Изменение записи--------------------" << endl;
                        PrintPrimal(studentsArr, capacity);
                        int cc{}, aa = 0, bb = 0, count = 0;
                        count = CountStudent(studentsArr, capacity);
                        char str1[255]{}, aa1C[10]{}, bb1C[10]{};
                        
                        cout << "[Введите -b для выхода]" << endl;

                        cout << "Введите номер студента: "; cin >> aa1C;
                        if (Find(aa1C)) {
                            system("cls");
                            cout << "Выход" << endl;
                            break;
                        }

                        aa = СheckInt(aa1C, 1, count);

                        cout << "0 - Полностью студента, 1 - Фамилия, 2 - Имя, 3 - Отчество, 4 - Курс, 5 - Группа, 6 - Оценки" << endl;
                        cout << "Введите номер столбца изменения: "; cin >> bb1C;
                        if (Find(bb1C)) {
                            system("cls");
                            cout << "Выход" << endl;
                            break;
                        }


                        bb = СheckInt(bb1C, 0, 6);

                        if (bb == 6) {
                            cout << "Какую по счёту оценку вы хотите изменить? "; cin >> count;
                            cout << "Введите изменённую оценку: "; cin >> str1;
                            if (СheckInt(str1) > 0) studentsArr[aa - 1].marks[count-1] = СheckInt(str1);
                        }
                        else if (bb == 0) {
                            cout << "Введите Фамилию: "; cin >> str1;
                            
                            if (!Find(str1)) Change(studentsArr, aa, 1, str1);
                            else break;

                            cout << "Введите Имя: "; cin >> str1;
                            if (!Find(str1)) Change(studentsArr, aa, 2, str1);
                            else break;

                            cout << "Введите Отчество: "; cin >> str1;
                            if (!Find(str1)) Change(studentsArr, aa, 3, str1);
                            else break;

                            cout << "Введите Курс: "; cin >> str1;
                            if (!Find(str1)) Change(studentsArr, aa, 4, str1);
                            else break;

                            cout << "Введите Группу: "; cin >> str1;
                            if (!Find(str1)) Change(studentsArr, aa, 5, str1);
                            else break;

                            for (int j = 1; j < 7; j++) {
                                cout << "Введите " << j << " отметку: "; cin >> str1;
                                if (СheckInt(str1) >= 0) studentsArr[aa - 1].marks[j-1] = СheckInt(str1);
                            }
                        }
                        else {
                            cout << "Введите изменённую строчку: "; cin >> str1;
                            if (!Find(str1)) cc = Change(studentsArr, aa, bb, str1);
                            else {
                                system("cls");
                                cout << "Выход" << endl;
                                break;
                            }
                            
                        }
                    }
                    system("cls");
                }
                    break;
                    
                case 3:
                {
                    system("cls");
                    if (CountStudent(studentsArr, capacity) == 0) cout << "База данных пуста." << endl;
                    else {
                        cout << "--------------------Удаление записи--------------------" << endl;
                        PrintPrimal(studentsArr, capacity);
                        int aa{}, count{};
                        char str1[10]{};
                        count = CountStudent(studentsArr, capacity);

                        cout << "[Введите -b для выхода]" << endl;
                        cout << "Введите номер студента: "; cin >> str1;
                        if (Find(str1))
                        {
                            system("cls");
                            cout << "Выход" << endl;
                            break;
                        }
                        aa = СheckInt(str1, 1, count);

                        Delete(studentsArr, aa, capacity);
                        system("cls");
                        cout << "Удаление записи успешно!" << endl;

                    }
                }
                    break;

                case 4:
                {
                    system("cls");
                    if (CountStudent(studentsArr, capacity) == 0) cout << "База данных пуста." << endl;
                    else {
                        cout << "Сортировка: " << endl;
                        PrintPrimal(studentsArr, capacity);
                        int aa = 0, bb = 0, cc = 0;
                        char aa1C[10]{}, bb1C[10]{}, cc1C[10]{};
                        cout << "[Введите -b для выхода]" << endl;
                        cout << "1 - Фамилия, 2 - Имя, 3 - Отчество, 4 - Курс, 5 - Группа, 6 - Оценки" << endl;

                        cout << "Введите номер столбца сортировки: "; cin >> bb1C;
                        if (Find(bb1C))
                        {
                            system("cls");
                            cout << "Выход" << endl;
                            break;
                        }
                        bb = СheckInt(bb1C, 1, 6);

                        cout << "1 - По возрастанию, 2 - По убыванию" << endl;
                        cout << "По какому столбцу отсортировать: "; cin >> aa1C;
                        if (Find(aa1C))
                        {
                            system("cls");
                            cout << "Выход" << endl;
                            break;
                        }
                        aa = СheckInt(aa1C, 1, 2);

                        if (bb == 6) {
                            cout << "Выберите номер оценки: "; cin >> cc1C;
                            if (Find(cc1C))
                            {
                                system("cls");
                                cout << "Выход" << endl;
                                break;
                            }
                            cc = СheckInt(cc1C, 1, 6);
                            SortByMark(studentsArr, cc - 1, aa, capacity);
                        }
                        else SortStep1(studentsArr, bb, aa, capacity);
                    }
                    system("cls");
                    cout << "Успешно!" << endl;
                }
                    break;

                case 0:
                    system("cls");
                    midMenu = false;
                    break;
                default:
                    system("cls");
                    cout << "Введите число от 0 до 4" << endl;
                    break;
                }
            }
            break;
            //return 3;
            break;
        case 0:
            cout << "Выход: ..." << endl;
            menuIs = false;
            break;
        default:
            system("cls");
            cout << "Введите число от 0 до 3" << endl;
            break;
        }
    }
}

void student::StudClear()
{
    for (int i = 0; i < 255; i++)
    {
        name[i] = '\0';
        surname[i] = '\0';
        patronymic[i] = '\0';
        group[i] = '\0';
        course[i] = '\0';
        marks[i] = 0;
    }
    *fill = false;
}

//#include <cstdlib>
//cout << "\033[H\033[2J\033[3J" ;
