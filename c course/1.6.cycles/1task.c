int main() {
    /* - прочитайте одно число i с помощью read_int
       - используя цикл while выведите числа от i до 10 включительно;
         после каждого числа должен стоять один пробел
       - если i > 10, выведите одно слово "No"
    */
    int i = read_int();
    
    if (i > 10) {
        printf("No");
    }
    else {
        while (i <= 10) {
            printf("%d ", i);
            i = i + 1;
        }
    }

    return 0;
}