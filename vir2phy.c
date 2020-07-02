#include "types.h"
#include "stat.h"
#include "user.h"


int main(void) {
    int var = 5;
    printf(1, "direccion de var %p\n", getphydir(var));
    exit();
}
