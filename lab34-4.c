/** lab34-4.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 34
* =========================================================== 
*/

#include "lab34functs.h"
#include <stdio.h>
#include <string.h>

int main() {

    // A cyclic redundancy check (CRC) is an error-detecting code commonly used
    // in digital networks and storage devices to detect accidental changes to
    // raw data. You can read more about CRCs on the internet.
    // Write a function make_crc() that accepts a character array and returns the
    // 32 bit CRC value calculated using the CRC-32 algorithm and the pre-computed
    // table of polynomial values defined in the CRCTAB array defined in the header file.
    
    // Pseudocode for the CRC-32 algorithm is below.
    // 0) if you skipped the text above, go back and read it
    // 1) initialize crc32 as an unsigned 32 bit value of all ones
    // 2) for each byte in the input array do steps 3 and 4
    // 3) calculate the table index by performing the following:
    //    xor the current message byte and the crc32 value, then save only
    //    the right most byte (this will be some value between 0 and 255)
    // 4) update the crc32 value by performing the following:
    //    setting crc32 equal to the crc32 value right shifted 8 bits and
    //    xor'd with the CRCTAB value at the previously calculated index.
    // 5) return the inverse (not reverse) of the crc32 value (negate all bits)

    // You are free to include code here to test your function.
   
    return 0;

}