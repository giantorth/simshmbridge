#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("Dummy program started. Running forever until terminated...\n");
    fflush(stdout);

    while (1) {
        sleep(1);
    }

    return 0;
}
