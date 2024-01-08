#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readFile(char* fileName, char* buffer) {
    FILE* fp = fopen(fileName, "r");

    if (fp == NULL) {
        printf("Error opening file %s\n", fileName);
        return;
    }

    char c;
    int i = 0;

    while ((c = fgetc(fp)) != EOF) {
        if (c == ' ' || c == '\n') {
            continue;
        }

        buffer[i] = c;
        i++;
    }
    buffer[i] = '\0';

    fclose(fp);
}
int main()
{
    char name1[20], name2[20];
    char content1[1000] = {'\0'};
    char content2[1000] = { '\0' };

    printf("Input first file name:");
    scanf("%s", name1);
    printf("Input second file name:");
    scanf("%s", name2);

    readFile(name1, content1);
    readFile(name2, content2);

    int count = 0, m = 0;
    while (content1[count] && content2[count])
    {
        if (content1[count] == content2[count])
            m++;

        count++;
    }

    FILE* fp = fopen("output", "w");
    fprintf(fp, "Total character: %d\n", count);
    fprintf(fp, "Same character: %d\n", m);
    fprintf(fp, "%.3f%%\n", m * 100.0 / count);

    return 0;
}