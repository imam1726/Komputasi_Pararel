#include <stdio.h>
#include <stdlib.h> // Wajib untuk malloc dan free

int main() {
    int n = 10;
    // Mengalokasikan memori dinamis untuk 10 integer
    int *arr = (int*) malloc(n * sizeof(int));

    // Cek apakah alokasi memori berhasil
    if (arr == NULL) {
        printf("Gagal mengalokasikan memori!\n");
        return 1;
    }

    // Mengisi array dengan angka 1-10 menggunakan for loop dan pointer
    for (int i = 0; i < n; i++) {
        *(arr + i) = i + 1; 
    }

    // Mencetak isi array menggunakan pointer
    printf("Isi array dinamis:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemen ke-%d: %d\n", i, *(arr + i));
    }

    // Membebaskan memori
    free(arr);
    printf("\nMemori telah dibebaskan.\n");

    return 0;
}