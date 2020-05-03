#include "solver.hpp"
#include <iostream>
#include <stdio.h>
#include<complex>
using namespace std;
using namespace solver;

solver::RealVariable T;
double solver::solve(const RealVariable &r){

    return 1.0;

}
complex<double> solver::solve(const ComplexVariable &cmplx){

    return complex<double> (3);
}
const solver::RealVariable& solver::operator*(int r, const RealVariable &x)
{
    return T;
}

const solver::RealVariable& solver::operator==(const solver::RealVariable& x, int r)
{
    return T;
}
const solver::RealVariable &solver::operator==(const solver::RealVariable &x, const solver::RealVariable &x2)
{
    return T;
}

const solver::RealVariable& solver::operator^(const solver::RealVariable& x, int r){
    return T;
}
const solver::RealVariable& solver::operator-(const solver::RealVariable& x, int d){
    return T;
}
const solver::RealVariable& solver::operator+(const solver::RealVariable& x1, double d1){
    return T;
}
const solver::RealVariable& solver::operator+(const solver::RealVariable&  x1, const solver::RealVariable& x2){
    return T;
}
const solver::RealVariable& solver::operator+(int d1, const solver::RealVariable& x2){
    return T;
}
const solver::RealVariable& solver::operator/(const solver::RealVariable& x1, double d1){
    return T;
}
const solver::RealVariable& solver::operator/(const solver::RealVariable& x1, int d1){
    return T;
}
const solver::RealVariable& solver::operator-(const solver::RealVariable& x1, const solver::RealVariable& d1){
    return T;
}

ComplexVariable C;
const solver::ComplexVariable& solver::operator*(int r, const ComplexVariable &x){ return C;}
const solver::ComplexVariable& solver::operator^(const ComplexVariable &r1, int r2){ return C;}
const solver::ComplexVariable& solver::operator/(const ComplexVariable &r1, int r2){ return C;}
const solver::ComplexVariable& solver::operator-(const ComplexVariable &r1, const ComplexVariable &r2){ return C;}
const solver::ComplexVariable& solver::operator-(const ComplexVariable &r1, int r2){ return C;}
const solver::ComplexVariable& solver::operator==(const ComplexVariable &r1, double r2){ return C;}
const solver::ComplexVariable& solver::operator==(const ComplexVariable &r1, const ComplexVariable &r2){ return C;}
const solver::ComplexVariable& solver::operator+(const ComplexVariable &r1, const ComplexVariable &r2){ return C;}
const solver::ComplexVariable& solver::operator+(const ComplexVariable &r1, int r2){ return C;}
const solver::ComplexVariable& solver::operator+(int r2, const ComplexVariable &r1){ return C;}
const solver::ComplexVariable& solver::operator+(const ComplexVariable &r1, complex<double> r2){ return C;}
