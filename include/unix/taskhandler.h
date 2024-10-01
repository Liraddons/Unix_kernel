#ifndef TASKHANDLER_H
#define TASKHANDLER_H

#include <stdint.h>

typedef struct task_t {
    uint64_t task1;
    uint64_t task2;
    uint64_t task3;
    uint64_t task4;
    uint64_t task5;
};

// The Task run Handler
void task_run_handler(task_t tasks);

#endif