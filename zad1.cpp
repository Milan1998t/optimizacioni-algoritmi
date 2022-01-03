#include<iostream>
using namespace std;
void main() {
	float fa, fb, fc, fd;
	long long it = 0;
	int res;
	for (int a = 1; a <= 711; ++a) {
		for (int b = a + 1; b <= 711; ++b) {
			//if (a + b > 711) break;
			for (int c = b + 1; c <= 711; ++c) {
				//if (a + b + c > 711) break;
				for (int d = c + 1; d <= 711; ++d) {
					res = a + b + c + d;
					it++;
					//if (res > 711) break;
					if (res == 711) {
						if (a*b*c*d == 711000000) {
							fa = a / 100.;
							fb = b / 100.;
							fc = c / 100.;
							fd = d / 100.;
							cout << fa << ',' << fb << ',' << fc << ',' << fd << endl;
						}
					}
				}
			}
		}
	}
	cout << it;
	cin >> it;
}