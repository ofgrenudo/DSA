#include <stdio.h>


int materials_needed() {
    FILE* p_materials_form_filled;
    char buffer[255];

    p_materials_form_filled = fopen("materials_needed.txt", "r");
    if (p_materials_form_filled == NULL) { printf("Could not open file materials_needed.txt"); return 1; } 

    int lines_in_file = 0;
    char character;
    {
        for (character = getc(p_materials_form_filled); character != EOF; character = getc(p_materials_form_filled)) {
            printf("character: %c, dvalue: %d\n", character, (int)character);
            if (character == '\n') { lines_in_file++; }
        }
    }


    printf("The file has %d lines\n", character);
    fclose(p_materials_form_filled);
    0;
}


int main(void) {
    char presents_needed[] = "";
    int status = materials_needed();

    return 0;
}