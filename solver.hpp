#include <iostream>
#include <stdio.h>
#include <complex>
using namespace std;




namespace solver
{
    
    
    class RealVariable
    {
        
        public:
            
            RealVariable(){

            }

        
        
            
            
             
    };
    const RealVariable &operator*(int r, const RealVariable &x);
    const RealVariable &operator==(const RealVariable &x, int r);
    const RealVariable &operator==(const RealVariable &x, const RealVariable &x2);
    const RealVariable &operator-(const RealVariable &r, int d);
    const RealVariable &operator^(const RealVariable &x, int r);

    const RealVariable &operator+(const RealVariable &r1, double d1);
    const RealVariable &operator+(const RealVariable &r1, const RealVariable &r2);
    const RealVariable &operator+(int d1, const RealVariable &r2);
    const RealVariable &operator/(const RealVariable &r1, double d1);
    const RealVariable &operator/(const RealVariable &r1, int d1);
    const RealVariable &operator-(const RealVariable &r1, const RealVariable &d1);
    const RealVariable &operator==(const RealVariable &r1, const RealVariable &r2);

    class ComplexVariable
    {
        double _re,_im;

        public:
            ComplexVariable(){

            }
            ostream &operator<<(ostream &os) const
            {
                os << "(" << _re << "+" << _im << "i)";
                return os;
            }
            
    };

    const ComplexVariable &operator*(int r, const ComplexVariable &x);
    const ComplexVariable &operator^(const ComplexVariable &r1, int r2);
    const ComplexVariable &operator/(const ComplexVariable &r1, int r2);
    const ComplexVariable &operator-(const ComplexVariable &r1, const ComplexVariable &r2);
    const ComplexVariable &operator-(const ComplexVariable &r1, int r2);
    const ComplexVariable &operator==(const ComplexVariable &r1, double r2);
    const ComplexVariable &operator==(const ComplexVariable &r1, const ComplexVariable &r2);
    const ComplexVariable &operator+(const ComplexVariable &r1, const ComplexVariable &r2);
    const ComplexVariable &operator+(const ComplexVariable &r1, int r2);
    const ComplexVariable &operator+(int r2, const ComplexVariable &r1);
    const ComplexVariable &operator+(const ComplexVariable &r1, complex<double> r2);

    complex<double> solve(const ComplexVariable &cmplx);
    double solve(const RealVariable &r);
        
    


    
    
}