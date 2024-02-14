#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0, space_count = 0, tab_count = 0, newline_count = 0;

    fp = fopen("example.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;

        if (ch == ' ') {
            space_count++;
        }

        if (ch == '\t') {
            tab_count++;
        }

        if (ch == '\n') {
            newline_count++;
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", char_count);
    printf("Number of spaces: %d\n", space_count);
    printf("Number of tabs: %d\n", tab_count);
    printf("Number of newlines: %d\n", newline_count);

    return 0;
}
