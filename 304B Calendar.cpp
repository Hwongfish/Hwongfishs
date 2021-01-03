// - 304B Calendar.cpp
// - 2020.12.27_Hwongfish_VIM
/*
* algorithm #1
#include<iostream>
#include<algorithm>
using namespace std;
const int month[13] = { 0,32,29,32,31,32,31,32,32,31,32,31,32 };
int a1, a2, a3, b1, b2, b3, p, days[3000][20][40];
int main() {
	for (int i = 1900; i < 2039; i++) {
		for (int j = 1; j < 13; j++) {
			for (int k = 1; k < month[j] + (j == 2 && ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)); k++)days[i][j][k] = p, p++;
		}
	}
	scanf("%d:%d:%d\n%d:%d:%d", &a1, &a2, &a3, &b1, &b2, &b3);
	printf("%d\n", abs(days[a1][a2][a3] - days[b1][b2][b3]));
	return 0;
}
*/