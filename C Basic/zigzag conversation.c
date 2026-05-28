#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {

    int len = strlen(s);

    // Special case
    if (numRows == 1 || numRows >= len) {
        return s;
    }

    char* result = (char*)malloc(sizeof(char) * (len + 1));

    int row = 0;
    int direction = 1;
    int index = 0;

    // Create rows
    char rows[numRows][len + 1];

    // Initialize rows
    for (int i = 0; i < numRows; i++) {
        rows[i][0] = '\0';
    }

    // Fill zigzag rows
    for (int i = 0; i < len; i++) {

        int currentLen = strlen(rows[row]);

        rows[row][currentLen] = s[i];
        rows[row][currentLen + 1] = '\0';

        // Change direction
        if (row == 0) {
            direction = 1;
        }
        else if (row == numRows - 1) {
            direction = -1;
        }

        row += direction;
    }

    // Combine all rows
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; rows[i][j] != '\0'; j++) {
            result[index++] = rows[i][j];
        }
    }

    result[index] = '\0';

    return result;
}
