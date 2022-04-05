#include "Complex.h"
#include <iostream>

TComplex::TComplex(double a, double b)
{
	re = a;
	im = b;
}

TComplex::TComplex(const TComplex& a)
{
	im = a.im;
	re = a.re;
}

double TComplex::GetRe()
{
	return(re);
}

double TComplex::GetIm()
{
	return(im);
}

void TComplex::SetRe(double a)
{
	re = a;
}

void TComplex::SetIm(double a)
{
	im = a;
}

TComplex TComplex::operator += (TComplex& a)
{
	re = re + a.re;
	im = im + a.im;
	
	return *this;
}

TComplex TComplex::operator + (TComplex& a)
{
	TComplex res;
	res.re = re + a.re;
	res.im = im + a.im;
	return res;
}

TComplex TComplex::operator - (TComplex& a)
{
	TComplex res;
	res.re = re - a.re;
	res.im = im - a.im;
	return res;
}

TComplex TComplex::operator * (TComplex& a)
{
	TComplex res;
	res.re = re*a.re-im*a.im;
	res.im = re*a.re+im*a.re;
	return res;
}

TComplex TComplex::operator / (TComplex& a)
{
	TComplex res;
	res.re = (re * a.re + im * a.im)/(a.re * a.re + a.im * a.im);
	res.im = (im * a.re - re * a.im)/(a.re * a.re + a.im * a.im);
	return res;
}

TComplex TComplex::operator = (TComplex& a)
{
	re = a.re;
	im = a.im;
	
	return *this;
}

bool TComplex::operator==(TComplex& a)
{
	return this->re == a.re && this->im == a.im;
}

std::ostream& operator<<(std::ostream& os,TComplex& a)
{
	os << a.GetRe()<< " + i*" << a.GetIm();
	return os;
}
std::istream& operator >> (std::istream& is, TComplex& a)
{
  std::cout<< "Re = "<<std::endl;
	is >> a.re;
	std::cout << "Im = " << std::endl;
	is >> a.im;
	return is;
}