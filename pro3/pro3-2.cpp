#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <iostream>
#include <stdio.h>
using namespace std;

///////////////////////////////

void init() {
    
}

void push_heap(int val) {
    return;
}

int pop_heap() {
    return 0;
}

int top_of_heap() {
    return 0;
}

/////////////////////////////////////

int score = 100;

#define ADD 100
#define POP 200
#define TOP 300

int run() {
    int step = 0, comm, val, ans, ret;
    scanf("%d", &step);

    init();

    for (int i = 0; i < step; i++) {
        scanf("%d", &comm);
        if (comm == ADD) {
            scanf("%d", &val);
            push_heap(val);
        }
        else if (comm == POP) {
            scanf("%d", &ans);
            ret = pop_heap();
            if (ans != ret) {
                score = 0;
            }
        }
        else if (comm == TOP) {
            scanf("%d", &ans);
            ret = top_of_heap();
            if (ans != ret) {
                score = 0;
            }
        }
    }

    return score;
}

int main(void) {

    freopen("input.txt", "r", stdin);

    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        score = 100;
        printf("#%d %d\n", i, run());
    }
    return 0;
}