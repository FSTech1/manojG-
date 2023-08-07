#include <stdio.h>
#include <string.h>
void deleteDuplicateChars(char str[]) {
    int len = strlen(str);
    int index = 0;
    int i, j;

    for (i = 0; i < len; i++) {
        int isDuplicate = 0;
        for (j = 0; j < index; j++) {
            if (str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    deleteDuplicateChars(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}

