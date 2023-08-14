#include <stdio.h>

int main(void) {
    FILE *materials_report;
    int character;
    int i;

    if (!(materials_report = fopen("materials_needed.txt", "r"))) {
        perror("materials_needed.txt");
        return 1;
    }

    int temp, cuboid[3];
    temp = cuboid[0] = cuboid[1] = cuboid[2] = 0;
    while ((character = fgetc(materials_report) != EOF)) {
        switch ((character+'0')) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                // This is the operation that will run for all of the above operators.
                // Essentially, this will run until we reach an 'x' in which we will dump the temp value into 
                temp *= 10;
                temp += character-'0'; // Convert from char to int.
                break;
            case 'x':
            case '\n':
                // This is the operation that will run for all of the above operators.
                for (int i = 0; cuboid[i] != 0; i++) { ; }
                cuboid[i] = temp;
                temp = 0;
                break;
            default:
                // What did I just read.
                printf("Unknown character: %d\n", character);
                break;
        }

        if (character == '\n') {
            
        }
    }

    fclose(materials_report);
    return 0;
}