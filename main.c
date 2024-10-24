#include <stdio.h>
int main() {
    int n;
    printf("Inserisci i valore del lato del quadrato: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Il numero deve essere maggiore o uguale a 2 per formare il quadrato.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}