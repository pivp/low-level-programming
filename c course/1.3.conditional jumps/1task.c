// Возвращает 1 если в числе одна цифра, иначе 0
int is_single_digit(int n) {
    if (n <= 9 && n >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

// Возвращает 1 если в числе ровно две цифры, иначе 0
int is_double_digit(int n) {
    if (n <= 99 && n >= 10) {
        return 1;
        }
    else {
        return 0;
    }
}