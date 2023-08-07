#include <stdio.h>
int isBitSet(unsigned char byteValue, int bitPosition) {
    if (bitPosition < 0 || bitPosition >= 8) {
        printf("Invalid bit position. Bit position should be between 0 and 7.\n");
        return -1;
    }

    unsigned char mask = 1 << bitPosition;
    return (byteValue & mask) != 0;
}

int main() {
    unsigned char byteValue = 0b01010101; 
    int bitPosition = 3; 

    int result = isBitSet(byteValue, bitPosition);
    if (result == -1) {
        return 1; 
    }

    if (result) {
        printf("Bit at position %d is set.\n", bitPosition);
    } else {
        printf("Bit at position %d is clear.\n", bitPosition);
    }

    return 0;
}
