#include <stdio.h>

int arr1[1000];
int arr2[1000] = {0};

void func() {
    int local_arr1[1000];
    int local_arr2[1000] = {0};
    printf("Hello from function!\n");
}

int main() {
    func();
    return 0;
}
