#include <stdio.h>

// ฟังก์ชัน swap ที่รับ pointer ของตัวแปรสองตัว
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;

    // แสดงค่าก่อนการสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกใช้ฟังก์ชัน swap
    swap(&a, &b);

    // แสดงค่าหลังการสลับ
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}