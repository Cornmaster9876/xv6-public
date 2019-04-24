#include "defs.h"
#include "stdlib.h"
#include "proc.h"
#include "syscall.h"

int main(void){
    printf(1, "La cantidad de procesos en ejecucion en la CPU es %i\n", getprocs());
exit();
}