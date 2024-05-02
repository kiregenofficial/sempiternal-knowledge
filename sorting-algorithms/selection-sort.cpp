#include "sort-head.h"

void selection_sort(int a[], int len) {
    for (int e = 0; e < len - 1; e++) {
        int min = e;
        for (int f = e + 1; f < len; f++) {
            if (a[f] < a[min])
                min = f;
        }
        int tmp = a[e];
        a[e] = a[min];
        a[min] = tmp;
    }

}

void selection_sort(char a[], int len) {
    for (int e = 0; e < len - 1; e++) {
        int min = e;
        for (int f = e + 1; f < len; f++) {
            if (a[f] < a[min])
                min = f;
        }
        char tmp = a[e];
        a[e] = a[min];
        a[min] = tmp;
    }

    //  for (char i : a)
    //      if (i != '\0')
    //          cout << (char)i;
}
