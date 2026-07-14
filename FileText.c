#include <stdio.h>
int main() {
    // WRITE (creates or truncates)
    FILE *fw = fopen("scores.txt", "w");
    if (!fw) { perror("Cannot open"); return 1; }
    fprintf(fw, "Alice  85\n");
    fprintf(fw, "Bob    92\n");
    fclose(fw);  // MUST close — flushes buffer to disk!

    // READ
    FILE *fr = fopen("scores.txt", "r");
    if (!fr) { perror("Cannot open"); return 1; }
    char name[30]; int score;
    while (fscanf(fr, "%29s %d", name, &score) == 2)
        printf("%-10s %d\n", name, score);
    fclose(fr);

    // APPEND (adds to end without erasing)
    FILE *fa = fopen("scores.txt", "a");
    fprintf(fa, "Carol  78\n");
    fclose(fa);
    return 0;
}