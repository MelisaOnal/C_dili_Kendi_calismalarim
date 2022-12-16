//robot found

#include "stdio.h"
int main() {
    char *name[] = {"Melisa", "Sude", "Jack", "John", "Robot"};
    int i;
    for (i = 0; i < 5; i++) {
        if (name[i] == "Robot") {
            printf("Robot is found");
            break;
        } else {
            printf("Robot is not found");
            break;
        }}
    return 0;
}

