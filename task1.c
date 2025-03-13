#include <stdio.h>
#include <time.h>
#include <limits.h>

void print_date_from_time_t(time_t timestamp) {
    struct tm *time_info;
    char buffer[80];

    if (timestamp < 0) {
        printf("Invalid time_t value.\n");
        return;
    }

    time_info = localtime(&timestamp);
    if (time_info == NULL) {
        printf("Error converting time_t to tm.\n");
        return;
    }

    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", time_info);
    printf("Date and time: %s\n", buffer);
}

int main() {
    time_t time32 = 2147483647;
    time_t time64 = LLONG_MAX;

    printf("Max time_t for 32-bit system: %lld\n", (long long)time32);
    print_date_from_time_t(time32);

    printf("Max time_t for 64-bit system: %lld\n", (long long)time64);

    return 0;
}
