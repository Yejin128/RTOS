#include "stdint.h"
#include "stdbool.h"

#include "kernel.h"

void Kernel_yield(void)
{
    Kernel_task_scheduler();
}