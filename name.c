#include <stdio.h>
#include <string.h>

char* greet(char* nam) {
    strcpy(nam, "Khan");
    return nam;
}

int main() {
    char name[] = "Suhel";
    char nn[100];
    
    char* result = greet(name);
    
    printf("%s\n", name);
    printf("%s\n", result);
    
    return 0;
}

