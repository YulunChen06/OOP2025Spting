# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
using namespace std ;

const double PI = 3.14159265358979323846 ;

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
    out << fixed << std::setprecision(3) ;
    out << "Circumference: " << cldr.Circumference() << endl ;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl ;
    out << "Volume: " << cldr.Volume() << endl ;
    return out ;
}

# endif
