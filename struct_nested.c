#include <stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
} Date;

typedef struct
{
    char name[20];
    Date birthday; // 구조체 안에 구조체
} Student;

int main(void)
{
    Student s = {
        "Kim",
        {2005, 3, 15}
    };

    printf("이름: %s\n", s.name);
    printf("생일: %d-%d-%d\n", s.birthday.year, s.birthday.month, s.birthday.day);

    return 0;
}