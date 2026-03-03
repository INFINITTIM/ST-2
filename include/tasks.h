// Copyright 2026 UNN-CS Team
#ifndef INCLUDE_TASKS_H_
#define INCLUDE_TASKS_H_

struct PoolCosts {
    double concrete_cost;
    double fence_cost;
};

// function for first task
double calculateGap();

// function for second task
PoolCosts calculateCosts();

#endif  // INCLUDE_TASKS_H_
