#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 기본 구조체
struct Student
{
    int id;
    char name[20];
    double score;
};

// typedef를 사용한 구조체

typedef struct
{
    int x;
    int y;
} Point;

// 중첩 구조체

typedef struct
{
    int year;
    int month;
    int day;
} Date;

typedef struct
{
    char name[20];
    Date Birthday;
} Person;

int main(void)
{
    struct Student s1;

    s1.id = 1;
    
    return 0;
}