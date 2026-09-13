#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 10;

    int* p = &x;

    printf("x의 값: %d\n", x);
    printf("x의 주소: %p\n", (void*)&x);

    printf("p에 저장된 주소: %p\n", (void*)p);
    printf("p가 가리키는 값: %d\n", *p);

    // 포인터를 통해 원본 값 변경
    *p = 20;

    printf("변경 후 x: %d\n", x);

    // 배열
    int arr[3] = {10, 20, 30};

    return 0;
}