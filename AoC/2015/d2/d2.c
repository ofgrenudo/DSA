#include <stdio.h>

int main(void) {
    FILE *materials_report;
    int character;
    int i;

    if (!(materials_report = fopen("materials_needed.txt", "r"))) {
        perror("materials_needed.txt");
        return 1;
    }

    int l, w, h, slack;
    while (fscanf(materials_report, "%s %s %s", &l, &w, &h) != EOF) {
        double side_one, side_two, side_three;
        side_one = w * h * l;
        printf("Side One %s\n", &side_one);
        printf("%sx%sx%s\n", &l, &w, &h);
        // To find the surface area of the present, the equation is `2*l*w + 2*w*h + 2*h*l`.
        // printf("%s, %s, %s", &side_one, &side_two, &side_two);
        // int surface_area = side_one + side_two + side_three;
        // printf("\tSurface Area = %s\n", &surface_area);
    }

    fclose(materials_report);

    return 0;
}