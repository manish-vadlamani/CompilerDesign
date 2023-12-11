#include <stdio.h>
#include <string.h>

int main() {
    char keywords[32][20] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
    };
    char input[20];
    int i, count = 0;
    printf("Enter a word to check if it's a keyword: ");
    scanf("%s", input);

    for(i=0;i<32;i++) {
        if (strcmp(keywords[i], input) == 0) {
            count = 1;
            break;
        }
    }
    if (count == 1) {
        printf("Valid. It is a keyword.\n");
    } else {
        printf("Not Valid. It is not a keyword.\n");
    }
    return 0;
}
