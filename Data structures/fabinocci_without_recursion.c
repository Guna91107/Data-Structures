#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i = 0;
    printf("Enter the limit\n");
    scanf("%d", &n);
    while(i <= n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}
