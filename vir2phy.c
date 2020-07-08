#include "types.h"
#include "stat.h"
#include "user.h"


int main(void) {
    int var = 25;

    printf(1, "la direccion virtual de var: %p\n", &var);
    printf(1, "la direccion fisica de var: %p\n", getphydir(var));
    exit();
}
