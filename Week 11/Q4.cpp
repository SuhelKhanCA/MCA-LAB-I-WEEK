#include <stdio.h>

int main() {
    float basicSalary, da, hra, ta, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    da = 0.70 * basicSalary;
    hra = 0.10 * basicSalary;
    ta = 0.20 * basicSalary;

    grossSalary = basicSalary + da + hra + ta;

    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}

