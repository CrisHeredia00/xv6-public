#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.c"


int main(void) {
    printf(1, "La cantidad de procesos en ejecucion en la CPU es %i\n", files_count());
    exit();
    return 0;
}
