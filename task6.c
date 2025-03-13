/*#include <stdio.h>

int global_var = 5;

void foo() {
    int local_var = 10;
    printf("Global var: %d, Local var: %d\n", global_var, local_var);
}

int main() {
    foo();
    return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char global_arr[10000];
static int static_var = 42;
int uninitialized_var;

void test_function() {
    char local_arr[5000];
    memset(local_arr, 1, sizeof(local_arr));
    printf("Function executed\n");
}

int main() {
    printf("Text segment function: %p\n", &test_function);
    printf("Data segment variable: %p\n", &static_var);
    printf("BSS segment variable: %p\n", &uninitialized_var);
    printf("Heap allocated: %p\n", malloc(1000));
    test_function();
    return 0;
}
