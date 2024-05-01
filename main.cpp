#include "sorting-algorithms/sort-head.h"
#include <iostream>

using namespace std;

int main() {

    char a[10] = "SOMETHING";

    for (char i : a)
        if (i != '\0')
            cout << (char)i;
    cout << endl;

    bubble_sort(a, 10);

    for (char i : a)
        if (i != '\0')
            cout << (char)i;
    cout << endl;

    system("pause");
    return 0;
}
