#include "doctest.h"
#include "solver.hpp"


#include <string>
using namespace std;
using namespace solver;



TEST_CASE("linear equations"){


    int i;
    RealVariable x;
    CHECK(solve(3*x-12==0) == 4);
    CHECK(solve(2*x + 12 == 48) ==18);
    CHECK(solve(6*x-13 == 8+5*x) ==21);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);
    CHECK(solve() ==);

    for ( i = 0; i < 100; i++)
    {
        CHECK(solve(x^2)==7.0);
    }
    



}