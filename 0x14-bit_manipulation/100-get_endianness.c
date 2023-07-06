#include "main.h"

/**
 * Author:Aishat Peregrino-Brimah
 * Endianness Protype
 * If the least significant byte is stored at the lowest address,
 * it means the system is little endian.
 */


int get_endianness(void) 
{
    unsigned int num = 1;
    char* ptr = (char*)&num;
    if (*ptr == 1)
        return 1; 
    else
        return 0; 
}


