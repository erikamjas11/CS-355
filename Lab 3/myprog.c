#include <stdio.h>

int isAtoZ(char ch) {
    return !((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z'));
}
int main(int argc, char** argv) {
for (int i = 1; i < argc; ++i) {
        for (int j = 0; argv[i][j] != '\0'; ++j) {
            if (isAtoZ(argv[i][j]))
                continue;
            for (int k = 0; k <= j; ++k) {
                if (!isAtoZ(argv[i][k]))
                    continue;
                printf("%c", argv[i][k]);
            }
            printf("\n");
        }
    }
    return 0;
}