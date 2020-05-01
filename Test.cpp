#include "doctest.h"
#include "solver.hpp"


#include <string>
using namespace std;
using namespace solver;



TEST_CASE(""){


    int i;
    RealVariable x;
    for ( i = 0; i < 100; i++)
    {
        CHECK(solve(x^2)==7.0);
    }
    



}