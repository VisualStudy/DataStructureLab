#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
} Student;

int main(void)
{
    Student s = {"Kim", 10};

    // 구조체 포인터
    Student* ptr = &s;

    printf("이름: %s\n", ptr -> name);
    printf("나이: %d\n", ptr -> age);

    ptr -> age = 21;

    printf("변경된 나이: %d\n", s.age);

    return 0;
}