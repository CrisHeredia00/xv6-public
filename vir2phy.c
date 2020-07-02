#include "types.h"
#include "stat.h"
#include "user.h"


int main(void) {
    int var = 5;
    int* x = &var;
    printf("La direccion virtual en vir2phy de var es: %p \n", x);
    printf(1, "el valor de var es: %p\n", getphydir(var));
    exit();
}
