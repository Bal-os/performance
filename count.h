#include "listoftests.h"
#include "output.h"
#include <iomanip>

double get_time(
    const function<pair<string, double>() > & func,
    pair<string, double> & result);

vector<double> get_benchmark_results_microseconds(
    const vector<function<pair<string, double>() > > & functions,
    vector<pair<string, double> > & results);

void process_benchmark();
