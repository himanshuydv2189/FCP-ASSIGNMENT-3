#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    char address[100];
};

int compareNames(const void *a, const void *b) {
    return strcmp(((struct Person*)a)->name, ((struct Person*)b)->name);
}

int main() {
    int n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    struct Person persons[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", persons[i].name);

        printf("Enter address for person %d: ", i + 1);
        scanf("%s", persons[i].address);
    }

    qsort(persons, n, sizeof(struct Person), compareNames);

    printf("\nAlphabetically sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\n", persons[i].name,persons[i].address);
    }

    return 0;
}
