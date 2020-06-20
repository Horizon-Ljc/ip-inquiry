#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main(int argc, char const **argv) {
	char s[1001];
	int length;
	while(cin >> s) {
		length = strlen(s);
		__int64 num = 1;
		for(int i = 0; i < length; i++) {
			num *= 26;
			num += s[i]-97;
			num %= 1000000007;
		}
		cout << num << endl;
	}
	return 0;
} 

