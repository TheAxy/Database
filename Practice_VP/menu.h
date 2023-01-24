#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct student {
    char* name = new char[255]{};
    char* surname = new char[255]{};
    char* patronymic = new char[255]{};
    char* course = new char[255]{};
    char* group = new char[255]{};
    int* marks = new int[255]{};
    bool *fill = new bool {false};
    int capacity = 1;

    void StudClear();
};

int CharII(char* arr, int bias);
int CharII(char chr);

bool Check(char* str, int action);

void PrintMenu();

int CountStudent(student* studentArr, int* capacity);
int MaxValue(char* arr);
void MaxValue(student* arr, int* result, int* capacity);

void StudCopy(student* arr, int one, int to);
void StudCopy(student* arr, student one, int to);
void StudCopy(student arr, student one);

void ExtendStud1(student*& arr, int* capacity);

int WhatMore(char* str, char* str1);
int WhatMore(int str, int str1);

void Sort(int* arr, int lenght, int* arr1);

int Find(int* arr, int lenght, int symbol);

bool Find(char* str);

int WhatAbsent(int* arr, int lenght);

int Change(student* arr, int column, int param, char* str1);
int Change(student* arr, int column, int param, int count, char str1);

int SortHelp(student arr, student arr1, int column, int param, int a);
void SortStep1(student* arr, int column, int param, int* capacity);
void SortByMark(student* arr, int count, int param, int* capacity);

void Delete(student*& arr, int column, int* capacity);

int ÑheckInt(char* arr);
int ÑheckInt(char* arr, int first, int last);

bool Add(student*& studentsArr, int count, bool* esc, int* capacity);

void ToDinam(char* one, char* to);

int WriteInFile(student* studentsArr);
int WriteInFileBin(student* studentsArr, int* capacity);

int ReadFile(student*& studentsArr, char* path, int isTextFile, int* capacity);
int ReadFileBin(student*& studentsArr, char* path, int* capacity);

void PrintPrimal(student* studentsArr, int* capacity);

void PrintSpecial(student* studentsArr, int* capacity);
void MainMenu(student* studentsArr, int* capacity);
