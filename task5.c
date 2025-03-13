#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void func() {
    printf("Виконання функції func()\n");
    longjmp(buf, 1);
}

int main() {
    if (setjmp(buf) == 0) {
        printf("Вхід у main()\n");
        func();
    } else {
        printf("Повернення в main() без використання IP!\n");
    }
    return 0;
}
