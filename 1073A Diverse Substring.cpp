/*
algorithm#1 by Hwongfish
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1000;
int main() {
	char string[N + 1] = { 0 };
	int n = 0;
	scanf("%d\n%s", &n, string);
	char key_letter = string[0];
	for (int i = 1; string[i] != 0; ++i)
		if (string[i] != key_letter) {
			printf("YES\n%c%c", string[i - 1], string[i]);
			return 0;
		}
	printf("NO\n");
	return 0;
}
*/