# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
using namespace std ;

const double PI = 3.1415926 ;

double Cylinder :: SurfaceArea(){
    double result ;
    result = 2 * PI * radius * radius + Circumference() * height ;
    return result ;
}

double Cylinder :: Volume(){
    double result ;
    result = PI * radius * radius * height ;
    return result ;
}

double Cylinder :: Circumference(){
    double result ;
    result = 2 * PI * radius ;
    return result ;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height ;
    return in ;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    
    return out ;
}

# endif
