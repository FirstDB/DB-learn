#include <stdio.h>  

int main() {
    int n[20], p[20], na[20];
    int pmax, pmin, nmax, nmin;
    int e = 0, q = 0;
    int r, s;

    printf("������20������:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 20; i++) {
        if (n[i] > 0) {
            p[e] = n[i];
            e++;
            printf("%d\n", p[e]);

        }
        else {
            if (n[i] != 0) {
                na[q] = n[i];
                q++;
                printf("%d", na[q]);

            }
        }
    }
    if (e != 0) {
        r = e;
        pmax = p[0];
        pmin = p[0];
        for (int e = 1; e < r; e++) {
            if (p[e] > pmax) {
                pmax = p[e];
            }
        }
        for (int e = 1; e < r; e++) {
            if (pmin > p[e]) {
                pmin = p[e];
            }
        }
    }
    if (q != 0) {
        s = q;
        nmax = na[0];
        nmin = na[0];
        for (q = 1; q < s; q++) {
            if (na[q] > nmax) {
                nmax = na[q];

            }
        }
        for (q = 1; q < s; q++) {
            if (nmin > na[q]) {
                nmin = na[q];
            }
        }
    }
    printf("���������:%d,��С������:%d,�������:%d,��С������%d", pmax, pmin, nmax, nmin);
    return 0;
}