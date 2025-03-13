#include <stdio.h>

void increase_stack_size() {
    int large_array[10000];
    printf("Адреса великого масиву: %p\n", (void*)large_array);
}

int main() {
    int i;
    printf("Вершина стека знаходиться близько до %p\n", (void*)&i);

    int global_var = 10;
    static int static_var = 20;

    printf("Адреса global_var (сегмент даних): %p\n", (void*)&global_var);
    printf("Адреса static_var (сегмент даних): %p\n", (void*)&static_var);
    printf("Адреса функції main (сегмент тексту): %p\n", (void*)&main);

    increase_stack_size();

    return 0;
}
