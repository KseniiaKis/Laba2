#pragma once
#include<iostream>

//������������� ��������: ��������� ����
class TComplex
{
protected:
	double re, im;
public:
	TComplex(double a = 0.0, double b = 0.0); //�� ��������� � �������������
	TComplex(const TComplex& a); //�����������

	double GetRe(); //������ � ���������� �����
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









