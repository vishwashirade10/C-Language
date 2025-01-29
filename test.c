#include <stdio.h>

int main() {
    char ch1, ch2, ch3;
    int rep1, rep2, rep3;

    // Ask for input
    printf("Enter the first character and its repetition count: ");
    scanf(" %c %d", &ch1, &rep1);

    printf("Enter the second character and its repetition count: ");
    scanf(" %c %d", &ch2, &rep2);

    printf("Enter the third character and its repetition count: ");
    scanf(" %c %d", &ch3, &rep3);

    // Print the characters with the specified repetitions
    for (int i = 0; i < rep1; i++) {
        printf("%c", ch1);
    }
    for (int i = 0; i < rep2; i++) {
        printf("%c", ch2);
    }
    for (int i = 0; i < rep3; i++) {
        printf("%c", ch3);
    }

    printf("\n");  // Newline at the end of the output

    return 0;
}
