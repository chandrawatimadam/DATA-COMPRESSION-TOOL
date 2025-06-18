#include <stdio.h>
#include <string.h>

void runLengthEncoding(const char *str) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char input[] = "AAAABBBCCDAA";
    printf("Original String: %s\n", input);
    printf("Encoded String: ");
    runLengthEncoding(input);
    return 0;
}
