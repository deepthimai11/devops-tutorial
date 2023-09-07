#include <stdio.h>
#include<string.h>// Function to perform bit stuffing
void bitStuffing(char* data, int size) {
    int i, j, count;

    // Count the number of consecutive 1's
    for (i = 0, count = 0; i < size; i++) {
        if (data[i] == '1') {
            count++;
            if (count == 5) {
                // Perform stuffing by adding an extra 0 after 5 consecutive 1's
                size++; // Increase size to accommodate the extra bit
                for (j = size - 1; j > i + 1; j--)
                    data[j] = data[j - 1];
                data[i + 1] = '0';
                count = 0; // Reset the count
            }
        } else {
            count = 0; // Reset the count if a '0' is encountered
        }
    }
}

int main() {
    char data[100]; // Assuming the user input will not exceed 100 characters

    printf("Enter data: ");
    scanf("%s", data);

    int size = strlen(data); // Get the length of the input string

    printf("Original data: %s\n", data);
    bitStuffing(data, size);
    printf("Bit-stuffed data: %s\n", data);

    return 0;
}

