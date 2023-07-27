#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(Fraction& fr)
	{
		if (numerator_ == fr.numerator_ && denominator_ == fr.numerator_) return true;
		return ((numerator_ * fr.denominator_) == (fr.numerator_ * denominator_));
	}
	bool operator!=(Fraction fr)
	{
		return ((numerator_ * fr.denominator_) != (fr.numerator_ * denominator_));
	}
	bool operator<(Fraction& fr)

	{
		if (denominator_ == fr.denominator_)
		{
			return (numerator_ > fr.numerator_);
		}
		if (numerator_ == fr.numerator_)
		{
			return (denominator_ > fr.denominator_);
		}
		return ((numerator_ * fr.denominator_) < (fr.numerator_ * denominator_));
		
	}
	bool operator>(Fraction& fr)
	{
		if (denominator_ == fr.denominator_)
		{
			return (numerator_ > fr.numerator_);
		}
		if (numerator_ == fr.numerator_)
		{
			return (denominator_ > fr.denominator_);
		}
		return ((numerator_ * fr.denominator_) > (fr.numerator_ * denominator_));
	}
	bool operator<=(Fraction& fr)
	{
		if (denominator_ == fr.denominator_)
		{
			return (numerator_ > fr.numerator_);
		}
		if (numerator_ == fr.numerator_)
		{
			return (denominator_ > fr.denominator_);
		}
		return ((numerator_ * fr.denominator_) <= (fr.numerator_ * denominator_));
	}
	bool operator>=(Fraction& fr)
	{
		if (denominator_ == fr.denominator_)
		{
			return (numerator_ > fr.numerator_);
		}
		if (numerator_ == fr.numerator_)
		{
			return (denominator_ > fr.denominator_);
		}
		return ((numerator_ * fr.denominator_) >= (fr.numerator_ * denominator_));
	}
};

int main()
{

	Fraction f1(5, 7);
	Fraction f2(10, 14);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	std::system("pause");
	return 0;
}