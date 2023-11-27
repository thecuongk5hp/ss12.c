#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    printf("Nhap so phan tu cua mang thu nhat: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang thu nhat: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap so phan tu cua mang thu hai: ");
    scanf("%d", &m);
    int b[m];
    printf("Nhap cac phan tu cua mang thu hai: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int count_a = 0, count_b = 0;
    printf("Cac so nguyen to trong mang thu nhat: ");
    for (int i = 0; i < n; i++) {
        if (is_prime(a[i])) {
            printf("%d ", a[i]);
            count_a++;
        }
    }
    printf("\nCac so nguyen to trong mang thu hai: ");
    for (int i = 0; i < m; i++) {
        if (is_prime(b[i])) {
            printf("%d ", b[i]);
            count_b++;
        }
    }
    printf("\n");
    if (count_a > count_b) {
        printf("Mang thu nhat co nhieu so nguyen to hon.\n");
    } else if (count_b > count_a) {
        printf("Mang thu hai co nhieu so nguyen to hon.\n");
    } else {
        printf("Hai mang co so luong so nguyen to bang nhau.\n");
    }
    return 0;
}
