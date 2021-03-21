#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <iostream>
#include <stdio.h>
using namespace std;


//////////// NEED TO IMPLEMENT ///////////////

int add_new_data(char* str, int val) {
	return 0;
}

int find_data(char* str) {
	return 0;
}

int modify_data(char* str, int modify_data) {
	return 0;
}

/////////////////////////////////////

int score = 100;

#define ADD 100
#define FIND 200
#define MODIFY 300

int run() {
	int step = 0, comm, val, ans, ret;
	char str[MAXLEN];
	scanf("%d", &step);

	init();

	for (int i = 0; i < step; i++) {
		scanf("%d", &comm);
		if (comm == ADD) {
			scanf("%s %d %d", str, &val, &ans);
			ret = add_new_data(str, val);
		}
		else if (comm == FIND) {
			scanf("%s %d", str, &ans);
			ret = find_data(str);
		}
		else if (comm == MODIFY) {
			scanf("%s %d %d", str, &val, &ans);
			ret = modify_data(str, val);
		}

		if (ans != ret) {
			score = 0;
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