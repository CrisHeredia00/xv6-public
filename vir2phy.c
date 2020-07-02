#include "types.h"
#include "stat.h"
#include "user.h"


int main(void) {
    int var = 5;
    
    printf("La direccion virtual en vir2phy de var es: %p \n", (void*)&var);

    printf(1, "el valor de var es: %p\n", getphydir(var));
    exit();
}
