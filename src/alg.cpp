// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    uint16_t sum = 1;
    for (int i = n; i > 0; i--) {
        sum *= value;
    }
    return sum;
}

uint64_t fact(uint16_t n) {
    uint64_t otvet = 1;
    for (int i = n; i >= 1; i--) {
        otvet *= i;
    }
    return otvet;
}

double calcItem(double x, uint16_t n) {
    return ((pown(x, n)) / (fact(n)));
}

double expn(double x, uint16_t count) {
    double sum = 0;
    for (int i = (count - 1); i >= 0; i--) {
        sum += calcItem(x, i);
    }
    return sum;
}

double sinn(double x, uint16_t count) {
    double sum = 0;
    for (int i = count; i > 0; i--) {
        double k = calcItem(x, 2 * i - 1);
        sum += pown(-1, i - 1) * k;
    }
    return sum;
}

double cosn(double x, uint16_t count) {
    double sum = 0;
    for (int i = count; i > 0; i--) {
        double k = calcItem(x, 2 * i - 2);
        sum += pown(-1, i - 1) * k;
    }
    return sum;
}
