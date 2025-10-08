#include <stdio.h>

int main() {
    int x = 10;     // ประกาศตัวแปร x และกำหนดค่าเริ่มต้นเป็น 10
    int *ptr;       // ประกาศตัวชี้ (pointer)

    ptr = &x;       // ให้ ptr ชี้ไปที่ตัวแปร x

    // แสดงค่าก่อนเปลี่ยน
    printf("Before: x = %d\n", x);

    // ใช้ pointer เปลี่ยนค่า x เป็น 20
    *ptr = 20;

    // แสดงค่าหลังเปลี่ยน
    printf("After: x = %d\n", x);

    return 0;
}
