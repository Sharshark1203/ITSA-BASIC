#include <stdio.h>
#include <stdlib.h>

int main() {
    int times, points1, points2, points3;

    scanf("%d", &times);
    for (int i = 0; i < times; i++) {
        scanf("%d %d %d", &points1, &points2, &points3);
        int Pass = 0;
        if (points1 >= 60) {
            Pass++;
        }
        if (points2 >= 60) {
            Pass++;
        }
        if (points3 >= 60) {
            Pass++;
        }
        if (Pass == 3) {
            printf("P\n");
        } else if ((Pass == 2) && (points1 + points2 + points3 >= 220)) {
            printf("P\n");
        } else if ((Pass == 2) && (points1 + points2 + points3 < 220)) {
            printf("M\n");
        } else if ((Pass == 1) && ((points1 >= 80) || (points2 >= 80) || (points3 >= 80))) {
            printf("M\n");
        } else {
            printf("F\n");
        }
    }

    return 0;
}
