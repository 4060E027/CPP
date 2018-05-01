#include "cir.h"

cir::cir()
{
	r = 1 ;
}

cir::cir(double n)
{
	r = n ;
}

double cir::get()
{
	return r * r * r *  3.14159 * 4/3 ;
}
