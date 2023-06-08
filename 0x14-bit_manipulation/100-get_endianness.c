int get_endianness(void) {
    int num = 1;
    // Cast the integer pointer to a character pointer
    char* ptr = (char*)&num;
    
    // If the first byte (lowest memory address) is 1, it is little endian
    // Otherwise, it is big endian
    if (*ptr == 1) {
        return 1; // Little endian
    } else {
        return 0; // Big endian
    }
}

