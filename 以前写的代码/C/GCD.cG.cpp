#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char const **argv) {
	char c;
	int j, i;
	while(cin >> c) {
		//打印第一个三角形
		for(i = 'A'; i <= c; i++) {
			for(j = i; j <= c; j++) {
				cout << " ";
			}
			for(j = c-1; j >= 'A'; j--) {
				cout << " ";
			}
			for(j = 'A'; j <= i; j++) {
				printf("%c", j);
			}
			for(j = i-1; j >= 'A'; j--) {
				printf("%c", j);
			}
			printf("\n");
		}
		
		//打印下面两个三角形
		for(i = 'A'; i <= c; i++) {
			for(j = i; j < c; j++) {
				cout << " ";
			}
			for(j = 'A'; j <= i; j++) {
				printf("%c", j);
			}
			for(j = i-1; j >= 'A'; j--) {
				printf("%c", j);
			}
			
			for(j = i; j <= c; j++) {
				cout << " ";
			}
			for(j = i; j <= c-1; j++) {
				cout << " ";
			}
			for(int j = 'A'; j <= i; j++) {
				printf("%c", j);
			}
			for(int j = i-1; j >= 'A'; j--) {
				printf("%c", j);
			}
			cout << endl;
		}
	}
	return 0;
}

