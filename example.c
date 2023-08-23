#include <stdio.h>
#include <time.h>

int main() {
    time_t t = 0x7FFFFFFF;  // 32-bit max value (2038-01-19T03:14:07 UTC)

    printf("Current time: %s", ctime(&t));

    t += 1;  // Increment by one second

    printf("New time: %s", ctime(&t));

    return 0;
}
