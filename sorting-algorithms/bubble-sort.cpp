#include "sort-head.h"

void bubble_sort(int a[], int len) {
    for (int c = 1; c < len; c++) {
        for (int d = 0; d < len - c; d++) {
            if (a[d] > a[d + 1]) {
                int tmp = a[d];
                a[d] = a[d + 1];
                a[d + 1] = tmp;
            }
        }
    }


}

void bubble_sort(char a[], int len) {
    for (int c = 1; c < len; c++) {
        for (int d = 0; d < len - c; d++) {
            if (a[d] > a[d + 1]) {
                char tmp = a[d];
                a[d] = a[d + 1];
                a[d + 1] = tmp;
            }
        }
    }

    //  for (char i : a)
    //      if (i != '\0')
    //          cout << (char)i;
}
