#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* b, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        b[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(const int* b, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << b[i];
    }
    cout << endl;
}

int Count(const int* b, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!(b[i] > 0 && b[i] % 5 == 0)) {
            count++;
        }
    }
    return count;
}

int Sum(const int* b, const int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        if (!(b[i] > 0 && b[i] % 5 == 0)) {
            totalSum += b[i];
        }
    }
    return totalSum;
}

void ReplaceWithZeros(int* b, const int size) {
    for (int i = 0; i < size; i++) {
        if (!(b[i] > 0 && b[i] % 5 == 0)) {
            b[i] = 0;
        }
    }
}

int main() {
    srand((unsigned)time(NULL));

    const int n = 22;
    int b[n];
    int Low = -40;
    int High = 50;

    Create(b, n, Low, High);
    cout << "Original array: ";
    Print(b, n);

    int count = Count(b, n);
    int totalSum = Sum(b, n);

    ReplaceWithZeros(b, n);

    cout << "Number of elements meeting the criteria: " << count << endl;
    cout << "Sum of these elements: " << totalSum << endl;

    cout << "Modified array: ";
    Print(b, n);

    return 0;
}
