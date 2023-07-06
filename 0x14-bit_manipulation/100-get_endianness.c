#include "main.h"

/**
 * Author:Aishat Peregrino-Brimah
 * Endianness Protype
 * If the least significant byte is stored at the lowest address,
 * it means the system is little endian.
 */


int get_endianness() {
    unsigned int num = 1;
    char* ptr = (char*)&num;
    if (*ptr == 1)
        return 1; // Little endian
    else
        return 0; // Big endian
}

int main() {
    int endianness = get_endianness();
    
    if (endianness == 1)
        printf("Little endian\n");
    else
        printf("Big endian\n");
    
    return 0;
}

