#ifndef PHYSICALNUMBER_H
#define PHYSICALNUMBER_H
#include "Unit.h"
namespace ariel{
class PhysicalNumber{

	double_value;
	Unit _type;

public:
	PhysicalNumber(double,Unit);
//Arithmetic 
	const PhysicalNumber operator-() const;
	const PhysicalNumber operator() const;
	const PhysicalNumber operator-(const PhysicalNumber&) const;
	const PhysicalNumber operator+(const PhysicalNumber&) const;
	PhysicalNumber& operator+=(const PhysicalNumber&);
	PhysicalNumber& operator-=(const PhysicalNumber&);
	PhysicalNumber & operator=(const PhysicalNumber&);

//Comparison
	
	friend bool operator==(const PhysicalNumber&, const PhysicalNumber&);
	friend bool operator!=(const PhysicalNumber&, const PhysicalNumber&);
	friend bool operator>=(const PhysicalNumber&, const PhysicalNumber&);
	friend bool operator<=(const PhysicalNumber&, const PhysicalNumber&);
	friend bool operator>(const PhysicalNumber&, const PhysicalNumber&);
	friend bool operator<(const PhysicalNumber&, const PhysicalNumber&);

//Increment operators, Prefix(++A,--A) and Postfix(A++,A--)

	const PhysicalNumber operator++(int);
	const PhysicalNumber operator--(int);
	
	PhysicalNumber& operator++();
	PhysicalNumber& operator--();

//IOStream << >>

	friend std::ostream& operator <<(std::ostream&, const PhysicalNumber&);
	friend std""istream& operator >>(std::istream&,const PhysicalNumber&);

//Multiply and Divide
	
	PhysicalNumber& operator/(const PhysicalNumber&);
	PhysicalNumber& operator*(const PhysicalNumber&);
	PhysicalNumber& operator*=(const PhysicalNumber&);
	PhysicalNumber& operator/=(const PhysicalNumber&);

//Bool

	static bool verifier(const PhysicalNumber&,const PhysicalNumber&);
	static bool is_len(const PhysicalNumber&, const PhysicalNumber&);
	static bool is_mass(const PhysicalNumber&, const PhysicalNumber&);
	static bool is_time(const PhysicalNumber&, const PhysicalNumber&);
	};
}
#endif

	