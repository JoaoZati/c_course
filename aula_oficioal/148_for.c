#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Changing the value of the second element (index 1)
    arr[1] = 25;
    
    // Printing the modified array
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
    
    return 0;
};
