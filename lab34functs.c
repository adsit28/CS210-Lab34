/** lab34functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 34
* =========================================================== 
*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "lab34functs.h"


/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */
void print_bits(void* ptr, int num_bytes) {
    // Cast the pointer as an unsigned byte
    uint8_t* byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i) {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j) {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');
        }

        // Separate bytes
        printf(" ");
    }

    // End with a new line
    printf("\n");
}

unsigned int reverse_bits(unsigned int num) {
    unsigned int reversed = 0;
    
    for (int i = 0; i < 32; i++) {
        // Shift the reversed number left by 1 to make room for the new bit
        reversed <<= 1;
        
        // Get the rightmost bit of the input number and add it to the reversed result
        reversed |= (num & 1);
        
        // Shift the input number right by 1 to process the next bit
        num >>= 1;
    }
    
    return reversed;
}

unsigned int bit_rotate_left(unsigned int num, int n) {
    // Ensure n is in the valid range [0, 31] to avoid unnecessary shifts
    n = n % 32;

    // Left shift the number by n bits and mask to fit within 32 bits
    unsigned int left_shifted = num << n;

    // Right shift the number by (32 - n) to capture overflow bits
    unsigned int right_shifted = num >> (32 - n);

    // Combine the left shifted part and the right shifted part using OR
    return left_shifted | right_shifted;
}

unsigned int bit_rotate_right(unsigned int num, int n) {
    // Ensure n is in the valid range [0, 31] to avoid unnecessary shifts
    n = n % 32;

    // Right shift the number by n bits and mask to fit within 32 bits
    unsigned int right_shifted = num >> n;

    // Left shift the number by (32 - n) to capture the overflow bits
    unsigned int left_shifted = num << (32 - n);

    // Combine the right shifted part and the left shifted overflow part using OR
    return right_shifted | left_shifted;
}