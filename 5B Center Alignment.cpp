//#include<iostream>
//using namespace std;
//const int N = 1000;
//char str[N][N] = { 0 };
//int max_length = 0, w_length[N] = { 0 };
//int main() {
//	//freopen("in", "r", stdin);
//	//freopen("out", "w+", stdout);
//	int now = 0, length = 0;
//	while (cin.peek() != EOF) {
//		if (cin.peek() == '\n') {
//			++now;
//			if (length > max_length)
//				max_length = length;
//			cin.get();
//			w_length[now - 1] = length;
//			length = 0;
//			continue;
//		}
//		str[now][length++] = cin.get();
//	}
//	for (int i = 0; i < max_length + 2; ++i)
//		putchar('*');
//	putchar('\n');
//	int tmp = 0;
//	for (int i = 0; i < now; ++i) {
//		putchar('*');
//		for (int j = 0; j < (max_length - w_length[i]+ tmp) / 2; ++j)
//			putchar(' ');
//		cout << str[i];
//		for (int j = 0; j < (max_length - w_length[i] + 1 - tmp) / 2; ++j)
//			putchar(' ');
//		if ((max_length - w_length[i]) % 2 == 1)tmp = 1 - tmp;
//		putchar('*');
//		putchar('\n');
//	}
//	for (int i = 0; i < max_length + 2; ++i)
//		putchar('*');
//}