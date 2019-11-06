#include "listoftests.h"

vector<function<pair<string, double>() > > get_functions_to_test(){

    return {
        []() -> pair<string, double> {
            int x = INIT_VALUE;
            for(int i = 0; i < COUNT_OF_ITERATIONS; i++)
                x += i,
                x &= MOD_MASK;
            return  make_pair("+\tint", x);
        },
        []() -> pair<string, double> {
            int x = INIT_VALUE;
            for(int i = 0; i < COUNT_OF_ITERATIONS; i++)
                x -= i,
                x &= MOD_MASK;
            return make_pair("-\tint", x);
        },
        []() -> pair<string, double> {
            int x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x *= i,
                x &= MOD_MASK;
            return  make_pair("*\tint", x);
        },
        []() -> pair<string, double> {
            int x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x |= MOD_MASK,
                x /= i;
            return make_pair("/\tint", x);
        },
        []() -> pair<string, double> {
            char x = 0x3f;
            for(int i = 0; i < COUNT_OF_ITERATIONS; i++)
                x += (i & 0xFF);
            return  make_pair("\n\t+\tchar", x);
        },
        []() -> pair<string, double> {
            char x = 0x3f;
            for(int i = 0; i < COUNT_OF_ITERATIONS; i++)
                x -= (i & 0xFF);
            return  make_pair("-\tchar", x);
        },
        []() -> pair<string, double> {
            char x = 0x3f;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
            {
                x &= 0xFF;
                x *= (i & 0xFF) + 1;
            }
            return  make_pair("*\tchar", x);
        },
        []() -> pair<string, double> {
            char x = 0x3f;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
            {
                x &= 0xFF;
                x /= ((i & 0xFF) + 1);
            }
            return  make_pair("/\tchar", x);
        },
        []() -> pair<string, double> {
            float x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x += i;
            return make_pair("\n\t+\tfloat", x);
        },
        []() -> pair<string, double> {
            float x = INIT_VALUE;

            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x *= i;
            return make_pair("*\tfloat", x);
        },
        []() -> pair<string, double> {
            float x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x /= i;
            return make_pair("/\tfloat", x);
        },
        []() -> pair<string, double> {
            float x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x -= i;
            return make_pair("-\tfloat", x);
        },
        []() -> pair<string, double> {
            double x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x += i;
            return make_pair("\n\t+\tdouble", x);
        },
        []() -> pair<string, double> {
            double x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x *= i;
            return make_pair("*\tdouble", x);
        },
        []() -> pair<string, double> {
            double x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x /= i;
            return make_pair("/\tdouble", x);
        },
        []() -> pair<string, double> {
            double x = INIT_VALUE;
            for(int i = 1; i <= COUNT_OF_ITERATIONS; i++)
                x -= i;
            return make_pair("-\tdouble", x);
        }
    };
}
