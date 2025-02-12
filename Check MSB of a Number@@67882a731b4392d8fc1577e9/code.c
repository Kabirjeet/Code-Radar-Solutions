#include <stdio.h>
#include <limits.h>  // For defining INT_MAX, INT_MIN

int main() {
    int num;
    
    // Input from user
    scanf("%d", &num);

    // Find the MSB position dynamically
    int bits = sizeof(int) * 8; // Number of bits in an int
    int msb_mask = 1 << (bits - 1); // Create a mask with MSB set

    // Check if MSB is set
    if (num & msb_mask)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
