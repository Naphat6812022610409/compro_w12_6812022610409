#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    // ให้ ptr ชี้ไปที่ตัวแปร x
    ptr = &x;

    // แสดงค่าของ x ก่อนการเปลี่ยนแปลง
    printf("Before: x = %d\n", x);

    // ใช้ pointer เปลี่ยนค่า x ให้เป็น 20
    *ptr = 20;

    // แสดงค่าของ x หลังการเปลี่ยนแปลง
    printf("After: x = %d\n", x);

    return 0;
}