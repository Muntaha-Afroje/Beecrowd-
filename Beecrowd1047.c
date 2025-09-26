#include <stdio.h>
int main() {
    int ih, im, fh, fm;
    int duration_h, duration_m;

    scanf("%d %d %d %d", &ih, &im, &fh, &fm);

    duration_h = fh - ih;
    duration_m = fm - im;

    if (duration_m < 0) {
        duration_m += 60;
        duration_h--;
    }
    if (duration_h < 0) {
        duration_h += 24;
    }
    if (ih == fh && im == fm) {
        duration_h = 24;
        duration_m = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);

    return 0;
}

