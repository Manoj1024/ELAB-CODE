    #include <stdio.h>
#include<string.h>
    int main() {
        char line[150];
        int i,j;
        scanf("%149s", line);
        for (i = 0; line[i] != '\0'; ++i) {
            while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0')) {
                for (j = i; line[j] != '\0'; ++j) {
                    line[j] = line[j + 1];
                }
                line[j] = '\0';
            }
        }
        
        puts(line);
        return 0;
    }