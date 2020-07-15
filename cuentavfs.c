#include "types.h"
#include "stat.h"
#include "user.h"


int main(void) {
    printf(1, "La cantidad de inodes usados en la CPU es %d\n", files_count());
    exit();
}
