#include <stdio.h>

// ฟังก์ชันสลับค่าระหว่างตัวแปร a และ b
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกใช้ฟังก์ชัน swap โดยส่ง address ของ a และ b
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After  swap: a = %d, b = %d\n", a, b);

    return 0;
}
