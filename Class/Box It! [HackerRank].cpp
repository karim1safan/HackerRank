#include<iostream>
using namespace std;


class Box
{
private:
	int length;
	int breadth;
	int height;
public:
	Box() : length(0), breadth(0), height(0){ }
	Box(int l, int b, int h) : length(l), breadth(b), height(h) { }
	Box(const Box &B)
	{
		length = B.length;
		breadth = B.breadth;
		height = B.height;
	}
	int getLength() { return length; }
	int getBreadth() { return breadth; }
	int getHeight() { return height; }
	long long CalculateVolume() 
	{
		long long res = 0;
		res = length * breadth * height;
		return res;
	}

	bool operator < (const Box &b)
	{
		bool b1 = length < b.length;
		bool b2 = (breadth < b.breadth) && (length == b.length);
		bool b3 = (height < b.height) && (breadth == b.breadth) && (length == b.length);

		if (b1 || b2 || b3)
			return true;
		else
			return false;
	}
};

ostream& operator<<(ostream& out, Box& B) {
	out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	return out;
};
int main()
{

	return 0;
}