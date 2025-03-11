#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
    uint32_t sum = 0, num;
    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "rb");
        fread(&num, sizeof(uint32_t), 1, file);
        fclose(file);
        num = ntohl(num);
        printf("%u(0x%08x)%s", num, num, (i == argc - 1) ? "" : " + ");
        sum += num;
    }
    printf(" = %u(0x%08x)\n", sum, sum);
    return 0;
}

