#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

#ifndef COUNT_OF_ITERATIONS
    #define COUNT_OF_ITERATIONS (1000*1000*100)
#endif

#ifndef MOD
    #define MOD (1 << 30)
#endif

#define MOD_MASK (MOD - 1)

#ifndef INIT_VALUE
    #define INIT_VALUE (11323)
#endif

#include<string>
vector<function<pair<std::string, double>() > > get_functions_to_test();
