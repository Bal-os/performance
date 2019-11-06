#include "count.h"
using namespace std;

double get_time(
    const function<pair<string, double>() > & func,
    pair<string, double> & result)
{
    clock_t t1 = clock();
    result = func();
	clock_t t2 = clock();
	double time = t2 - t1;

    return  time;
}

vector<double> get_benchmark_results_microseconds(
    const vector<function<pair<string, double>() > > & functions,
    vector<pair<string, double> > & results)
{
    results.resize(functions.size());
    vector<double> execution_time;
    for(int i = 0; i < (int)functions.size(); i++)
        execution_time.push_back( get_time(functions[i], results[i]) );


    return execution_time;
}

void process_benchmark()
{
        vector<pair <string, double> > results;
        auto benchmark_results =
            get_benchmark_results_microseconds(get_functions_to_test(), results);
        double min_time = *(benchmark_results.begin());
        //double min_time = *(min_element(benchmark_results.begin(), benchmark_results.end()));
        for(int i = 0; i < (int)results.size(); i++)
            output(results[i].first, benchmark_results[i], min_time);
}

