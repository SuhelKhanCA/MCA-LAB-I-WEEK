#include <stdio.h>

void towersOfHanoiIterative(int n, char source, char auxiliary, char destination) {
    int numMoves = (1 << n) - 1;
    int i;
    char temp;

    if (n % 2 == 0) {
        temp = auxiliary;
        auxiliary = destination;
        destination = temp;
    }

    for (i = 1; i <= numMoves; i++) {
        if (i % 3 == 1)
            printf("Move disk %d from %c to %c\n", (i/3) + 1, source, destination);
        else if (i % 3 == 2)
            printf("Move disk %d from %c to %c\n", (i/3) + 1, source, auxiliary);
        else if (i % 3 == 0)
            printf("Move disk %d from %c to %c\n", (i/3), auxiliary, destination);
    }
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve the Towers of Hanoi problem (Iterative):\n");
    towersOfHanoiIterative(n, 'A', 'B', 'C');
    return 0;
}

