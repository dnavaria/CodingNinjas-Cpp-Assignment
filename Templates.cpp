/*
	Templates
*/

#include <iostream> 
using namespace std;

template <typename T,typename V>

class Pair
{
	T x;
	V y;
public:
	void setX(T x){
		this->x = x;
	}
	void setY(V y){
		this->y = y;
	}
	T getX(){
		return x;
	}
	V getY(){
		return y;
	}
	
};



int main(){


/*
	Pair<int> p1;
	p1.setX(3);
	p1.setY(4);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;
*/

/*
	Pair<int, double> p2;
	p2.setX(3);
	p2.setY(4.509);
	cout<<p2.getX()<<" "<<p2.getY(); 
*/

	Pair<Pair<int,int>,int> p1;
	Pair<int,int>p2;
	p2.setX(5);
	p2.setY(10);
	p1.setX(p2);
	p1.setY(20);
	cout<<p1.getX().getX()<<" "<<p1.getX().getY()<<" "<<p1.getY()<<endl;
	return 0;
}