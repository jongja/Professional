#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <iostream>
#include <stdio.h>
using namespace std;

int mstrcmp(const char a[], const char b[])
{
	int i;
	for (i = 0; a[i] != '\0'; ++i) if (a[i] != b[i]) return a[i] - b[i];
	return a[i] - b[i];
}

void mstrcpy(char dest[], const char src[])
{
	register int i = 0;
	while (src[i] != '\0') { dest[i] = src[i]; i++; }
	dest[i] = src[i];
}

// Need to implement! //

int insert_list(char* name, int val) {
	return 0;
}

int delete_list(char* name) {
	return 0;
}

////////////////////////

#define INSERT 100
#define DELETE 200

int score = 100;

int run() {
	int T;
	scanf("%d", &T);

	score = 100;
	int command, val, ans, ret;
	char s[20];

	for (int i = 0; i < T; i++) {
		scanf("%d %s %d %d", &command, s, &val, &ans);
		if (command == INSERT) {
			ret = insert_list(s, val);
			if (ret != ans) {
				score = 0;
			}
		}
		else if (command == DELETE) {
			ret = delete_list(s);
			if (ret != ans) {
				score = 0;
			}
		}
	}
	return score;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	printf("#1 %d\n", run());
}