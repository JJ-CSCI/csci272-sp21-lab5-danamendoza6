//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Write the assignment code here
class Real {
  protected:
      double a;
  public:
    Real(): a(0.0) {}
    double object.real:: GetReal();
    return real;
    Real operator+ (const Real& r);

};

class Complex : public Real {
  protected:
    double v,b;
 public:   
Complex(): v(0.0), b(0.0) Real() {}
double object.complex::GetImaginary();
return complex;
Complex operator+ (const Complex& r);

}; 

class Surreal: public complex {
  protected:
    double a,b,c;
public:
Surreal(): a(0.0), b(0.0), c(0.0) Complex() {}
double object.surreal::GetSurreal();
return surreal;
Surreal operator+ (const Surreal& s);
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "c1" ) {
        Real n{10.0};
        REQUIRE( n.GetReal() == 10.0 );
    }
    SECTION( "c2" ) {
        Complex n{10.0, 20.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
    }
    SECTION( "c3" ) {
        Surreal n{10.0, 20.0, 30.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
        REQUIRE( n.GetSurreal() == 30.0 );
    }
    SECTION( "a1" ) {
        Real n{10.0};
        Real r = n + 2.0;
        REQUIRE( r.GetReal() == 12.0 );
    }
    SECTION( "a2" ) {
        Complex n{10.0, 20.0};
        Complex r = n + 2.0;
        REQUIRE( r.GetReal() == 12.0 );
        REQUIRE( r.GetImaginary() == 22.0 );
    }
    SECTION( "a3" ) {
        Surreal n{10.0, 20.0, 30.0};
        Surreal r = n + 2.0;
        REQUIRE( r.GetReal() == 12.0 );
        REQUIRE( r.GetImaginary() == 22.0 );
        REQUIRE( r.GetSurreal() == 32.0 );
    }
}
//------------------------------
