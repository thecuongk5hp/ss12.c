#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap 3 so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Tong cua tung cap so: %d %d %d\n", a + b, b + c, c + a);
    printf("Hieu cua tung cap so: %d %d %d\n", a - b, b - c, c - a);
    if (a > b && a > c) {
        printf("%d la so lon nhat.\n", a);
        if (b > c) {
            printf("%d la so nho nhat.\n", c);
        } else {
            printf("%d la so nho nhat.\n", b);
        }
    } else if (b > a && b > c) {
        printf("%d la so lon nhat.\n", b);
        if (a > c) {
            printf("%d la so nho nhat.\n", c);
        } else {
            printf("%d la so nho nhat.\n", a);
        }
    } else {
        printf("%d la so lon nhat.\n", c);
        if (a > b) {
            printf("%d la so nho nhat.\n", b);
        } else {
            printf("%d la so nho nhat.\n", a);
        }
    }
    return 0;
}
