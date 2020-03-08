/*
Representing fraction using oops
*/
#include <iostream> 
using namespace std;
class fraction
{

private:
	int numerator;
	int denominator;

public:
	fraction(int numerator,int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void print()const{
		cout<<this->numerator<<" / "<<this->denominator<<endl;
	}

	void simplify(){
		int gcd = 1;
		int j = min(this->numerator,this->denominator);
		for(int i = 1; i <=j ; i++){ 
			if(this->numerator % i == 0 && this->denominator % i == 0){
				gcd = i;
			}
		}
		this->numerator=this->numerator/gcd;
		this->denominator=this->denominator/gcd;
	}

	fraction add(fraction const &f2){
		int lcm = denominator * f2.denominator;
		int x = lcm/denominator;
		int y = lcm/f2.denominator;

		int num = x * numerator + (y * f2.numerator);

		//numerator = num;
		//denominator = lcm;

		fraction fNew(num,lcm);
		fNew.simplify();
		return fNew;
	}

	fraction multiply(fraction const &f2){
		int x = numerator * f2.numerator;
		int y = denominator * f2.denominator;
		fraction fNew(x,y);
		fNew.simplify();
		return fNew;
	}	
	
	//overloading + oeprator	
	fraction operator+(fraction const &f2)const{
		int lcm = denominator * f2.denominator;
		int x = lcm/denominator;
		int y = lcm/f2.denominator;
		int num = x * numerator + (y * f2.numerator);
		fraction fNew(num,lcm);
		fNew.simplify();
		return fNew;
	}
	//overloading * oeprator
	fraction operator*(fraction const &f2)const{
		int x = numerator * f2.numerator;
		int y = denominator * f2.denominator;
		fraction fNew(x,y);
		fNew.simplify();
		return fNew;
	}
	//overloading == oeprator
	bool operator==(fraction const &f2)const{
		return (numerator == f2.numerator && denominator == f2.denominator);
	}
	//overloading ++(Pre-Increment) oeprator	
	fraction& operator++(){
		numerator = numerator + denominator;
		simplify();
		return *this;
	}
	//overloading (Post-Increment)++ oeprator	
	fraction operator++(int){
		fraction fNew(numerator,denominator);
		numerator = numerator + denominator;
		simplify();
		fNew.simplify();
		return fNew;
	}
	//overloading += operator
	fraction& operator+=(fraction const &f2){
		int lcm = denominator * f2.denominator;
		int x = lcm/denominator;
		int y = lcm/f2.denominator;
		int num = x * numerator + (y * f2.numerator);
		numerator = num;
		denominator = lcm;
		simplify();
		return *this;
	}
};


int main(){
	fraction f1(10,2);
	fraction f2(15,4);
	fraction f3 = f1*f2;
	f1.print();
	f2.print();
	f3.print();
	return 0;
}