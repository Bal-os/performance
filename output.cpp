#include "output.h"
using namespace std;

void output(string type, double tOperation, double fast) {
	cout << "\t" << type;
	cout << setw(13) << COUNT_OF_ITERATIONS / (tOperation / double(CLOCKS_PER_SEC))<<"\t";
	double percent = 100 * fast / tOperation;
	double bins = percent / 5;
	cout << ceil(percent);
	cout  << "%" << '\t';
	int N = ceil(bins);
	for (int i = 0; i < N; i++) cout << "X";
	cout << endl;
}
