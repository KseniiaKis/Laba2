#pragma once
#include<iostream>

//перегруженные операции: потоковый ввод
class TComplex
{
protected:
	double re, im;
public:
	TComplex(double a = 0.0, double b = 0.0); //по умолчанию и инициализатор
	TComplex(const TComplex& a); //копирования

	double GetRe(); //Доступ к защищенным полям
	double GetIm();

	void SetRe(double a);
	void SetIm(double a);

	TComplex operator += (TComplex& a);

	TComplex operator + (TComplex& a);

	TComplex operator - (TComplex& a);

	TComplex operator * (TComplex& a);

	TComplex operator / (TComplex& a);

	TComplex operator = (TComplex& a);

	bool operator == (TComplex& a);

	friend std::istream& operator >> (std::istream& is, TComplex& a);

};
std::ostream& operator << (std::ostream& os, TComplex& a);