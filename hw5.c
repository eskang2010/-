#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hanoi(int n, char from, char temp, char to) {
    if (n == 1) {
        printf("%c���� ����%d��(��) %c�� �ű�\n", from, n, to);
    }
    else {
        hanoi(n - 1, from, to, temp);
        printf("%c���� ����%d��(��) %c�� �ű�\n", from, n, to);
        hanoi(n - 1, temp, from, to);
    }
}

int main() {

    hanoi(3, 'A', 'B', 'C');

    return 0;
}
