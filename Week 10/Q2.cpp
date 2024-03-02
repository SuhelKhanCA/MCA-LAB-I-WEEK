#include <iostream>
#include <string>

struct Employee {
    std::string name;
    double basic_pay;
};

void inputEmployeeData(Employee& employee) {
    std::cout << "Enter employee name: ";
    std::getline(std::cin, employee.name);
    std::cout << "Enter basic pay: ";
    std::cin >> employee.basic_pay;
    std::cin.ignore();  // To remove the newline character from the input buffer
}

int main() {
    const int num_employees = 5;
    Employee employees[num_employees];

    // Input each employee's name and basic pay
    for (int i = 0; i < num_employees; ++i) {
        inputEmployeeData(employees[i]);
    }

    // Calculate and print each employee's gross salary
    for (int i = 0; i < num_employees; ++i) {
        double da = employees[i].basic_pay * 0.52;
        double gross_salary = employees[i].basic_pay + da;

        std::cout << "Employee Name: " << employees[i].name << ", Gross Salary: " << gross_salary << std::endl;
    }

    return 0;
}

