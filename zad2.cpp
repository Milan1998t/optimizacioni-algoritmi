#include<iostream>
using namespace std;
void main() {
	float fb, fc, fd;
	long t=0;
	for (int b = 1; b <= 711; ++b) {
		for (int c = b + 1; c <= 711; ++c) {
			//if (b + c > 711) break;
			for (int d = c + 1; d <= 711; ++d) {
				//if (b + c + d > 711) break;
				t++;
				if ((711 - b - c - d)*b*c*d == 711000000) {
					fb = b / 100.;
					fc = c / 100.;
					fd = d / 100.;
					cout << 7.11 - fb - fc - fd << ',' << fb << ',' << fc << ',' << fd << endl;
				}
			}
		}
	}
	
	cout << t;
	cin >> t;
}